/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 00:41:59 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/09/26 00:42:02 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

void	megaphone(string str) {
	
}

int main(int ac, char **av) {
	string	str;

	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << str << endl;
	else {
		megaphone(av[1]);
	}
	return 0;
}
