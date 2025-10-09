/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyeonl <juhyeonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:49:45 by juhyeonl          #+#    #+#             */
/*   Updated: 2025/10/09 15:43:38 by juhyeonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->is_armed = false;
	std::cout << this->name <<" joined the sword." << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << this->name << " died." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	this->is_armed = true;
	std::cout << this->name << " grabbed a " << this->weapon->getType() << " to fight with." << std::endl;
}

void HumanB::attack(void)
{
    if (this->is_armed)
        std::cout << this->name << " attacks with his " << this->weapon->getType() << "." << std::endl;
    else
        std::cout << this->name << " attacks with his sword." << std::endl;
}
