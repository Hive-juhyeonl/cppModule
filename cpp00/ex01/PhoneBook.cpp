/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:01:48 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/12/05 18:42:20 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	this->_count = 0;
}

PhoneBook::~PhoneBook()
{
}

std::string PhoneBook::_truncate(std::string str) const
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

// [수정] numericOnly 플래그에 따라 숫자 유효성 검사 수행
std::string PhoneBook::_getInput(std::string prompt, bool numericOnly) const
{
	std::string input;
	bool valid;

	while (true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
			exit(0);
		
		valid = true;

		// 1. 빈 문자열 검사
		if (input.empty())
		{
			std::cout << "Field cannot be empty." << std::endl;
			valid = false;
		}
		// 2. 숫자 전용 모드일 경우, 모든 문자가 숫자인지 검사
		else if (numericOnly)
		{
			for (size_t i = 0; i < input.length(); i++)
			{
				if (!isdigit(input[i])) // <cctype>이나 <cstdlib> 등에 포함됨, 혹은 '0'<=c<='9' 직접 비교 가능
				{
					valid = false;
					std::cout << "Phone number must contain only digits." << std::endl;
					break;
				}
			}
		}

		if (valid)
			return input;
	}
}

void PhoneBook::add()
{
	// [수정] 일반 필드는 false(혹은 생략), 전화번호만 true 전달
	std::string firstName = _getInput("First Name: ");
	std::string lastName = _getInput("Last Name: ");
	std::string nickname = _getInput("Nickname: ");
	
	// 전화번호 입력 시에만 숫자 검증 모드 켜기
	std::string phoneNumber = _getInput("Phone Number: ", true);
	
	std::string darkestSecret = _getInput("Darkest Secret: ");

	this->_contacts[this->_index % 8].setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	this->_index++;
	if (this->_count < 8)
		this->_count++;
}

void PhoneBook::search()
{
	if (this->_count == 0)
	{
		std::cout << "PhoneBook is empty." << std::endl;
		return;
	}

	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i < this->_count; i++)
	{
		std::cout << std::setw(10) << (i + 1) << "|";
		std::cout << std::setw(10) << _truncate(this->_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << _truncate(this->_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << _truncate(this->_contacts[i].getNickname()) << std::endl;
	}

	std::string input;
	std::cout << "Enter index to display: ";
	if (!std::getline(std::cin, input))
		exit(0);

	if (input.length() == 1 && input[0] >= '1' && input[0] <= '0' + this->_count)
	{
		int idx = input[0] - '1';
		std::cout << "First Name: " << this->_contacts[idx].getFirstName() << std::endl;
		std::cout << "Last Name: " << this->_contacts[idx].getLastName() << std::endl;
		std::cout << "Nickname: " << this->_contacts[idx].getNickname() << std::endl;
		std::cout << "Phone Number: " << this->_contacts[idx].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->_contacts[idx].getDarkestSecret() << std::endl;
	}
	else
	{
		std::cout << "Invalid index." << std::endl;
	}
}