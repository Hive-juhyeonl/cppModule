/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyeonl <juhyeonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:32:50 by juhyeonl          #+#    #+#             */
/*   Updated: 2025/10/16 14:38:53 by juhyeonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
private:
	int					_f_num;
	static const int	_fract_bit = 8;
public:
	/*  Default constructor */
	Fixed();
	/* Copy constructor */
	Fixed(const Fixed& fixed);
	/* Copy assignment operator */
	Fixed &operator=(const Fixed &src);
	/* Destructor */
	~Fixed();
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif