/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyeonl <juhyeonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:16:00 by juhyeonl          #+#    #+#             */
/*   Updated: 2025/11/05 10:22:21 by juhyeonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() : _f_num(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &copy )
{
	*this = copy;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( Fixed const &src )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_f_num = src.getRawBits();
	}
	return *this;
}

Fixed::Fixed(const int num)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_f_num = num << _fract_bit;
}

Fixed::Fixed(const float num)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_f_num = (int)roundf(num * (1 << _fract_bit));
}

float	Fixed::toFloat( void ) const
{
	return (float)this->_f_num / (1 << _fract_bit);
}

int	Fixed::toInt( void ) const
{
	return this->_f_num >> _fract_bit;
}

int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_f_num;
}

void	Fixed::setRawBits( int const raw )
{
	this->_f_num = raw;
}

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return o;
}

bool	Fixed::operator>(const Fixed &other) const
{
	return this->_f_num > other.getRawBits();
}

bool    Fixed::operator<(const Fixed &other) const
{
	return this->_f_num < other.getRawBits();
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return this->_f_num >= other.getRawBits();
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return this->_f_num <= other.getRawBits();
}

bool	Fixed::operator==(const Fixed &other) const
{
	return this->_f_num == other.getRawBits();
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return this->_f_num != other.getRawBits();
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed&	Fixed::operator++()
{
	this->_f_num++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	++(*this);
	return temp;
}

Fixed&	Fixed::operator--()
{
	this->_f_num--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	--(*this);
	return temp;
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}