/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 00:41:59 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/09/26 21:26:10 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(int ac, char **av) {
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			for(int j = 0; av[i][j] != '\0'; j++)
				av[i][j] = (char)std::toupper(av[i][j]);
			std::cout << av[i];
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
