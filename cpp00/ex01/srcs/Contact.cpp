/* ************************************************************************** */
/* */
/* :::      ::::::::   */
/* Contact.cpp                                        :+:      :+:    :+:   */
/* +:+ +:+         +:+     */
/* By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/* +#+#+#+#+#+   +#+           */
/* Created: 2025/09/27 03:00:12 by JuHyeon           #+#    #+#             */
/* Updated: 2025/09/29 03:00:00 by JuHyeon          ###   ########.fr       */
/* */
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

// 소멸자
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

// 모든 5개 필드가 채워져 있는지 확인합니다. (요구 사항: 빈 필드가 없어야 함)
bool Contact::isFilled() const {
    return !this->firstName.empty() 
        && !this->lastName.empty() 
        && !this->nickname.empty() 
        && !this->phoneNumber.empty() 
        && !this->darkestSecret.empty();
}
