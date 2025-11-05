/* ************************************************************************** */
/* */
/* :::      ::::::::   */
/* Fixed.hpp                                          :+:      :+:    :+:   */
/* +:+ +:+         +:+     */
/* By: juhyeonl <juhyeonl@student.42.fr>          +#+  +:+       +#+        */
/* +#+#+#+#+#+   +#+           */
/* Created: 2025/10/16 12:32:50 by juhyeonl          #+#    #+#             */
/* Updated: 2025/11/05 10:20:00 by juhyeonl         ###   ########.fr       */
/* */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
    int                 _f_num;
    static const int    _fract_bit = 8;
public:
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed& copy);
    Fixed &operator=(const Fixed &src);
    ~Fixed();
    
    float   toFloat(void) const;
    int     toInt(void) const;

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    // --- 여기부터 수정 ---

    // bool& -> bool 로 변경 (6개)
    bool    operator>(const Fixed &other) const;
    bool    operator<(const Fixed &other) const;
    bool    operator>=(const Fixed &other) const;
    bool    operator<=(const Fixed &other) const;
    bool    operator==(const Fixed &other) const;
    bool    operator!=(const Fixed &other) const;

    // Fixed& -> Fixed 로 변경 (4개)
    Fixed   operator+(const Fixed &other) const;
    Fixed   operator-(const Fixed &other) const;
    Fixed   operator*(const Fixed &other) const;
    Fixed   operator/(const Fixed &other) const;

    // --- 여기까지 수정 --- (증감 연산자는 원래 맞게 되어 있었습니다)

    Fixed&  operator++();
    Fixed   operator++(int);
    Fixed&  operator--();
    Fixed   operator--(int);

    static Fixed&       min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed&       max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream&   operator<<(std::ostream &o, Fixed const &fixed);

#endif