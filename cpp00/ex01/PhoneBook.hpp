/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:02:01 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/12/05 18:41:27 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class PhoneBook
{
private:
	Contact _contacts[8];
	int _index;
	int _count;

	std::string _truncate(std::string str) const;
	std::string _getInput(std::string prompt, bool numericOnly = false) const;

public:
	PhoneBook();
	~PhoneBook();

	void add();
	void search();
};

#endif