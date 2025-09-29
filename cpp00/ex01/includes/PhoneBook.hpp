/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 03:01:42 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/09/27 03:01:56 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# include <iostream>

# define MAX_CONTACTS 8

class PhoneBook {
private:
	Contact contacts[MAX_CONTACTS]; 
	int numContacts;
	int nextIndex;
	int totalAdded;

	std::string formatColumn(const std::string& text) const;

public:
	PhoneBook();
	~PhoneBook();

	void addContact();

	void searchContact() const;

	void run(); 
};

#endif