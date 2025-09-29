/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 03:00:12 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/09/27 03:09:37 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

// 생성자: id를 초기화 리스트로 설정하고, 나머지 필드를 빈 문자열로 초기화
Contact::Contact(int contactId) 
    : id(contactId), 
      firstName(""), 
      lastName(""), 
      nickname(""), 
      phoneNumber(""), 
      darkestSecret("") {}

// 소멸자: 동적 할당된 자원이 없으므로 비워둡니다.
Contact::~Contact() {}

// *** Setter 구현 ***
void Contact::setFirstName(const std::string& str) {
    this->firstName = str;
}
void Contact::setLastName(const std::string& str) {
    this->lastName = str;
}
void Contact::setNickname(const std::string& str) {
    this->nickname = str;
}
void Contact::setPhoneNumber(const std::string& str) {
    this->phoneNumber = str;
}
void Contact::setDarkestSecret(const std::string& str) {
    this->darkestSecret = str;
}

// *** Getter 구현 ***
int Contact::getId() const {
    return this->id;
}
std::string Contact::getFirstName() const {
    return this->firstName;
}
std::string Contact::getLastName() const {
    return this->lastName;
}
std::string Contact::getNickname() const {
    return this->nickname;
}
std::string Contact::getPhoneNumber() const {
    return this->phoneNumber;
}
std::string Contact::getDarkestSecret() const {
    return this->darkestSecret;
}

// 모든 필수 필드(여기서는 대표적으로 3개)가 채워져 있는지 확인
bool Contact::isFilled() const {
    return !this->firstName.empty() && !this->lastName.empty() && !this->phoneNumber.empty();
}
