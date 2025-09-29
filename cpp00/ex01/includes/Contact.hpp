/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 21:58:47 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/09/26 22:19:57 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
private:
	int id; 
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact(int contactId = 0);
	~Contact();

	void setFirstName(const std::string& str);
	void setLastName(const std::string& str);
	void setNickname(const std::string& str);
	void setPhoneNumber(const std::string& str);
	void setDarkestSecret(const std::string& str);

	int getId() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

	bool isFilled() const;
};

#endif