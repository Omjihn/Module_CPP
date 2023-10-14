/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:57:07 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/13 12:46:03 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    //std::cout << "[Fixed] Default constructor called" << std::endl;
    fix_val = 0;
}

Fixed::Fixed( const int val )
{
    //std::cout << "[Fixed] Int constructor called" << std::endl;
    fix_val = val << fract_bit_nb;
}

Fixed::Fixed( const float val )
{
    //std::cout << "[Fixed] Float constructor called" << std::endl;
    fix_val = roundf(val * (1 << fract_bit_nb));
}

Fixed::Fixed( const Fixed &val )
{
    //std::cout << "[Fixed] Copy constructor called" << std::endl;
    this->fix_val = val.fix_val;
}

Fixed   &Fixed::operator=( const Fixed &val )
{
    //std::cout << "[Fixed] Copy assignment operator called" << std::endl;
    this->fix_val = val.toFloat();
    return (*this);
}

std::ostream &operator<<( std::ostream &output, const Fixed &val )
{
    output << val.toFloat();
    return (output);
}

bool    Fixed::operator>(const Fixed &val) const
{
    return (this->toFloat() > val.toFloat());
}

bool    Fixed::operator<(const Fixed &val) const
{
    return (this->toFloat() < val.toFloat());
}

bool    Fixed::operator>=(const Fixed &val) const
{
    return (this->toFloat() >= val.toFloat());
}

bool    Fixed::operator<=(const Fixed &val) const
{
    return (this->toFloat() <= val.toFloat());
}

bool    Fixed::operator==(const Fixed &val) const
{
    return (this->toFloat() == val.toFloat());
}

bool    Fixed::operator!=(const Fixed &val) const
{
    return (this->toFloat() != val.toFloat());
}

Fixed   Fixed::operator*(const Fixed &val) const
{
    return Fixed(this->toFloat() * val.toFloat());
}

Fixed   Fixed::operator+(const Fixed &val) const
{
    return Fixed(this->toFloat() + val.toFloat());
}

Fixed   Fixed::operator-(const Fixed &val) const
{
    return Fixed(this->toFloat() - val.toFloat());
}

Fixed   Fixed::operator/(const Fixed &val) const
{
    return Fixed(this->toFloat() / val.toFloat());
}

float   Fixed::operator++(int)
{
    return ((float) fix_val++ / (1 << fract_bit_nb));
}

float   Fixed::operator++()
{
    return ((float) ++fix_val / (1 << fract_bit_nb));
}

float   Fixed::operator--(int)
{
    return ((float) fix_val-- / (1 << fract_bit_nb));
}

float   Fixed::operator--()
{
    return ((float) --fix_val / (1 << fract_bit_nb));
}

const Fixed   &Fixed::min(const Fixed &arg_1, const Fixed &arg_2)
{
    if (arg_1.toFloat() < arg_2.toFloat())
        return (arg_1);
    return (arg_2);
}

const Fixed   &Fixed::max(const Fixed &arg_1, const Fixed &arg_2)
{
    if (arg_1.toFloat() > arg_2.toFloat())
        return (arg_1);
    return (arg_2);
}

Fixed   &Fixed::min(Fixed &arg_1, Fixed &arg_2)
{
    if (arg_1 < arg_2)
        return (arg_1);
    return (arg_2);
}

Fixed   &Fixed::max(Fixed &arg_1, Fixed &arg_2)
{
    if (arg_1 > arg_2)
        return (arg_1);
    return (arg_2);
}

Fixed::~Fixed( void )
{
    //std::cout << "[Fixed] Destructor called" << std::endl;
}

float   Fixed::toFloat( void ) const
{
    return ((float) fix_val / (1 << fract_bit_nb));
}

int     Fixed::toInt( void ) const
{
    return (fix_val / (1 << fract_bit_nb));
}