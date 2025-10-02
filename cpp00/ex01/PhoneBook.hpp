/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:02:01 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/10/02 18:53:48 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_CONTACTS 8

class   PhoneBook
{
    private:
        Contact contacts[MAX_CONTACTS];
        int     contactCount;
        int     nextIndex;
        std::string getShortField(const std::string& str) const;

    public:
        PhoneBook();
        ~PhoneBook();

        void    addContact();
        void    searchContact() const;
};

#endif