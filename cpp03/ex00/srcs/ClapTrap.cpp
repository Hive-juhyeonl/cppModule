/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyeonl <juhyeonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:45:07 by juhyeonl          #+#    #+#             */
/*   Updated: 2025/11/05 10:52:47 by juhyeonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_attackDamage	= 10;
	std::cout << "ClapTrap" << this->_name << "is born" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap" << this->_name << "is destroyed" << std::endl;
}

ClapTrap::attack(const std::string& target)
{
	
}

ClapTrap::beRepaired()
{
	
}

ClapTrap::takeDamage()
{
	
}