/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 03:10:00 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/09/27 03:23:24 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip> // SEARCH 명령어 출력을 위해 필요
#include <sstream>

// 생성자: 초기 상태 설정
PhoneBook::PhoneBook() : numContacts(0), nextIndex(0), totalAdded(0) {}

PhoneBook::~PhoneBook() {}

// --- SEARCH: 10자 출력 형식에 맞춰 문자열을 자르거나 점을 추가하는 보조 함수 ---
std::string PhoneBook::formatColumn(const std::string& text) const {
    if (text.length() > 10) {
        return text.substr(0, 9) + ".";
    }
    return text;
}

// --- ADD 명령어 처리 ---
void PhoneBook::addContact() {
    std::string input;

    // Contact 객체를 PhoneBook의 배열 위치에 새로 생성 (덮어쓰기 로직)
    // contactId는 totalAdded + 1을 사용합니다.
    Contact newContact(this->totalAdded + 1); 
    
    // 필수 필드 입력 루프 (비어있는 필드 금지)
    // 실제 구현에서는 입력이 유효할 때까지 반복해야 합니다. (편의상 간략화)
    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    newContact.setFirstName(input);

    // ... 나머지 필드 입력 및 설정 (last name, nickname, phone number, darkest secret)
    
    // (*** 실제 구현에서는 모든 필드가 비어있지 않은지 검사해야 합니다 ***)
    
    // 새 연락처를 nextIndex 위치에 저장 (가장 오래된 것 덮어쓰기 포함)
    this->contacts[this->nextIndex] = newContact;

    // 총 추가된 연락처 수 증가 (ID 부여용)
    this->totalAdded++;

    // 유효한 연락처 수가 8개 미만일 때만 증가
    if (this->numContacts < MAX_CONTACTS) {
        this->numContacts++;
    }
    
    // 다음 인덱스 순환: (0 -> 1 -> ... -> 7 -> 0)
    this->nextIndex = (this->nextIndex + 1) % MAX_CONTACTS; 
    
    std::cout << "Contact added successfully." << std::endl;
}

// --- SEARCH 명령어 처리 ---
void PhoneBook::searchContact() const {
    if (this->numContacts == 0) {
        std::cout << "PhoneBook is empty." << std::endl;
        return;
    }

    // 1. 목록 헤더 표시
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    
    // 2. 저장된 연락처 목록 표시 (Right-aligned, 10자 폭)
    for (int i = 0; i < this->numContacts; ++i) {
        std::cout << "|" << std::setw(10) << std::right << i + 1; // 1-based index 출력
        std::cout << "|" << std::setw(10) << std::right << formatColumn(this->contacts[i].getFirstName());
        std::cout << "|" << std::setw(10) << std::right << formatColumn(this->contacts[i].getLastName());
        std::cout << "|" << std::setw(10) << std::right << formatColumn(this->contacts[i].getNickname());
        std::cout << "|" << std::endl;
    }
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    // 3. 인덱스 입력 요청 및 유효성 검사
    std::string input;
    int index = -1;
    
    std::cout << "Enter the index (1 to " << this->numContacts << ") to display: ";
    if (!std::getline(std::cin, input))
        return;

    // C++98 호환 문자열 -> 정수 변환 (stringstream 사용)
    std::stringstream ss(input);
    
    // ss >> index; 는 입력이 숫자가 아니거나, 숫자 뒤에 공백이 아닌 문자가 올 경우 실패할 수 있습니다.
    // 여기서는 간단히 문자열을 정수로 변환하여 index에 저장합니다.
    if (!(ss >> index) || !ss.eof()) // eof()는 문자열 끝까지 읽었는지 확인
    {
        std::cout << "Invalid index format." << std::endl;
        return;
    }
    
    // 4. 인덱스 범위 확인 및 상세 정보 출력
    if (index >= 1 && index <= this->numContacts) {
        const Contact& c = this->contacts[index - 1];
        std::cout << "--- Contact Details (ID: " << c.getId() << ") ---" << std::endl;
        std::cout << "First Name:     " << c.getFirstName() << std::endl;
        std::cout << "Last Name:      " << c.getLastName() << std::endl;
        std::cout << "Nickname:       " << c.getNickname() << std::endl;
        std::cout << "Phone Number:   " << c.getPhoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << c.getDarkestSecret() << std::endl;
    } else {
        std::cout << "Index out of range." << std::endl;
    }
}

void PhoneBook::run() {
    std::string command;
    std::cout << "Welcome to My Awesome PhoneBook! Commands: ADD, SEARCH, EXIT" << std::endl;

    while (true) {
        std::cout << "\nEnter command: ";
        if (!std::getline(std::cin, command)) {
            break; 
        }

        if (command == "EXIT") {
            std::cout << "The program quits and the contacts are lost forever!" << std::endl;
            break;
        } else if (command == "ADD") {
            addContact();
        } else if (command == "SEARCH") {
            searchContact();
        } else {
            std::cout << "Unknown command. Please use ADD, SEARCH, or EXIT." << std::endl;
        }
    }
}
