/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:48:43 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/10/02 18:01:52 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->firstName = "";
	this->lastName = "";
	this->nickName = "";
	this->phoneNumber = "";
	this->darkestSecret = "";
}

Contact::~Contact() {}

std::string Contact::getFirstName() const { return (this->firstName); }
std::string Contact::getLastName() const { return (this->lastName); }
std::string Contact::getNickName() const { return (this->nickName); }
std::string Contact::getPhoneNumber() const { return (this->phoneNumber); }
std::string Contact::getDarkestSecret() const { return (this->darkestSecret); }

bool	Contact::isEmpty() const { return (this->firstName.empty()); }

void	Contact::setDetails()
{
	while (this->firstName.empty())
	{
		std::cout << "First Name : ";
		std::getline(std::cin, this->firstName);
	}
	while (this->lastName.empty())
	{
		std::cout << "Last Name : ";
		std::getline(std::cin, this->lastName);
	}
	while (this->nickName.empty())
	{
		std::cout << "Nick Name : ";
		std::getline(std::cin, this->nickName);
	}
	while (this->phoneNumber.empty())
	{
		std::cout << "Phone Number : ";
		std::getline(std::cin, this->phoneNumber);
	}
	while (this->darkestSecret.empty())
	{
		std::cout << "Darkest Secret : ";
		std::getline(std::cin, this->darkestSecret);
	}
	std::cout << "successfully Added." << std::endl;
}