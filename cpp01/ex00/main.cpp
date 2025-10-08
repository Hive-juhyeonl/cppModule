/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:53:44 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/10/08 14:54:12 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie* heap_zombie = newZombie("HeapZombie");
    heap_zombie->announce();
    delete heap_zombie;
    randomChump("StackZombie");
    return (0);
}
