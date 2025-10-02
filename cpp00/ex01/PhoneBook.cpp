/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:01:48 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/10/02 20:58:34 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contactCount = 0;
	this->nextIndex = 0;
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::addContact()
{
	Contact& currentContat = this->contacts[this->nextIndex];
	currentContat.setDetails();
	if (this->contactCount < MAX_CONTACTS)
		this->contactCount++;
	this->nextIndex = (this->nextIndex + 1) % MAX_CONTACTS;
}

std::string PhoneBook::getShortField(const std::string& str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::searchContact() const
{
	if (this->contactCount == 0)
	{
		std::cout << "It's empty." << std::endl;
		return ;
	}
	for (int i = 0; i < this->contactCount; ++i)
	{
		const Contact& contact = this->contacts[i];
		std::cout << i + 1 << ". " << contact.getFirstName() << contact.getLastName();
		std::cout << contact.getNickName() << std::endl;
	}
	std::string	indexStr;
	int			index;

	while (true)
	{
		std::cout << "\nWhat do you want to see? Enter Number : ";
		std::getline(std::cin, indexStr);
		if (indexStr.empty()) continue;
		try
		{
			if (indexStr.length() == 1
				&& indexStr[0] >= '1'
				&& indexStr[0] <= ('0' + this->contactCount))
				index = indexStr[0] - '0';
			else
			{
				std::cout << "Invalid Index. Try again." << std::endl;
				continue;
			}
		}
		catch(const std::exception& e)
		{
			std::cout << "Invalid Index. Try again." << std::endl;
			continue;
		}
		if (index >= 1 && index <= this->contactCount)
		{
			const Contact&	contact = this->contacts[index - 1];
			std::cout << "\nInfo ( " << index << " )" << std::endl;
			std::cout << "First Name: " << contact.getFirstName() << std::endl;
            std::cout << "Last Name: " << contact.getLastName() << std::endl;
            std::cout << "Nickname: " << contact.getNickName() << std::endl;
            std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
            std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
			break ;
		}
		else
			std::cout << "You can see only from 1 to " << this->contactCount << "please try again." << std::endl;
	}
}
