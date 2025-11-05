/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyeonl <juhyeonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:04:20 by juhyeonl          #+#    #+#             */
/*   Updated: 2025/10/16 14:28:51 by juhyeonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Fixed.hpp"

// Constructors
Fixed::Fixed(): _f_num(0)
{
	std::cout << "Fixed Default Constructor called" << std::endl;
}

Fixed::Fixed(const int input)
{
	std::cout << "Fixed Int Constructor called" << std::endl;
	this->_f_num = input << this->_fract_bit;
}

Fixed::Fixed(const float input)
{
	std::cout << "Fixed Float Constructor called" << std::endl;
	this->_f_num = roundf(input * (1 << this->_fract_bit));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Fixed Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Fixed::~Fixed()
{
	std::cout << "Fixed Deconstructor called" << std::endl;
}

// Overloaded Operators
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Fixed Assignation operator called" << std::endl;
	if (this != &src)
		this->_f_num = src.getRawBits();

	return *this;
}

// Public Methods
float	Fixed::toFloat(void)const
{
	return ((float)this->_f_num / (float)(1 << this->_fract_bit));
}

int	Fixed::toInt(void)const
{
	return (this->_f_num >> this->_fract_bit);
}
// Getter
int	Fixed::getRawBits(void)const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_f_num);
}

// Setter
void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_f_num = raw;
}


std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}