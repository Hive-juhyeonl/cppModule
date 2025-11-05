/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyeonl <juhyeonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:36:12 by juhyeonl          #+#    #+#             */
/*   Updated: 2025/10/16 13:12:47 by juhyeonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Call Default constructor" << std::endl;
	this->_f_num = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Call Copy constructor" << std::endl;
	this->_f_num = fixed._f_num;
}

Fixed& Fixed::operator=(const Fixed &src)
{
	std::cout << "Call Copy assignment operator" << std::endl;
	if (this != &src)
		this->_f_num = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Call Destructor" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "Call getRawBits function" << std::endl;
	return (this->_f_num);
}

void	Fixed::setRawBits(int const raw)
{
	this->_f_num = raw;
}
