/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:26:22 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/10/02 18:53:54 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	cmd;

	std::cout << "---- My Aswome PhoneBook ----" << std::endl;
	while (true)
	{
		std::cout << "\n Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, cmd))
			break ;
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact();
		else if (cmd == "EXIT")
		{
			std::cout << "close the phoneBook" << std::endl;
			break ;
		}
		else
			std::cout << "command not found" << std::endl;
	}
	return (0);
}