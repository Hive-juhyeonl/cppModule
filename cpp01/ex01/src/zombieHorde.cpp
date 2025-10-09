/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyeonl <juhyeonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:42:45 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/10/09 14:03:40 by juhyeonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N < 1)
    {
        std::cout << "Horde is bigger than 1." << std::endl;
        return (NULL);
    }
    Zombie *horde = new Zombie[N];
    if (!horde)
    {
        std::cout << "allocation is failed." << std::endl;
        return (NULL);
    }
    for (int i = 0; i < N; i++)
        horde[i].setName(name);
    return (horde);
}