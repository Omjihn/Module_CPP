/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:22:52 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/10 17:47:46 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    //std::cout << "Default constructor called" << std::endl;
    this->fix_val = 0;
}

Fixed::Fixed( const int val )
{
    //std::cout << "Int constructor called" << std::endl;
    this->fix_val = val;
}

Fixed::Fixed( const float val )
{
    //std::cout << "Float constructor called" << std::endl;
    this->fix_val = val;
}

Fixed::Fixed( const Fixed &val )
{
    //std::cout << "Copy constructor called" << std::endl;
    this->fix_val = val.toFloat();
}

Fixed   &Fixed::operator=( const Fixed &val )
{
    //std::cout << "Copy assignment operator called" << std::endl;
    this->fix_val = val.toFloat();
    return (*this);
}

bool    Fixed::operator>(const Fixed &val)
{
    return (this->fix_val > val.fix_val);
}

bool    Fixed::operator<(const Fixed &val)
{
    return (this->fix_val < val.fix_val);
}

bool    Fixed::operator>=(const Fixed &val)
{
    return (this->fix_val >= val.fix_val);
}

bool    Fixed::operator<=(const Fixed &val)
{
    return (this->fix_val <= val.fix_val);
}

bool    Fixed::operator==(const Fixed &val)
{
    return (this->fix_val == val.fix_val);
}

bool    Fixed::operator!=(const Fixed &val)
{
    return (this->fix_val != val.fix_val);
}

float   Fixed::operator*(const Fixed &val)
{
    return (this->fix_val * val.fix_val);
}

float   Fixed::operator+(const Fixed &val)
{
    return (this->fix_val + val.fix_val);
}

float   Fixed::operator-(const Fixed &val)
{
    return (this->fix_val - val.fix_val);
}

float   Fixed::operator/(const Fixed &val)
{
    return (this->fix_val / val.fix_val);
}

float   Fixed::operator++(int)
{
    return (this->fix_val++);
}

float   Fixed::operator++()
{
    return (++this->fix_val);
}

float   Fixed::operator--(int)
{
    return (this->fix_val--);
}

float   Fixed::operator--()
{
    return (--this->fix_val);
}

Fixed   &Fixed::min(const Fixed &arg_1, const Fixed &arg_2)
{
    if (arg_1.fix_val < arg_2.fix_val)
        return (arg_1);
    return (arg_2);
}

Fixed   &Fixed::max(const Fixed &arg_1, const Fixed &arg_2)
{
    if (arg_1.fix_val > arg_2.fix_val)
        return (arg_1);
    return (arg_2);
}

float   &Fixed::min(float &arg_1, float &arg_2)
{
    if (arg_1 < arg_2)
        return (arg_1);
    return (arg_2);
}

float   &Fixed::max(float &arg_1, float &arg_2)
{
    if (arg_1 > arg_2)
        return (arg_1);
    return (arg_2);
}

Fixed::~Fixed( void )
{
    //std::cout << "Destructor called" << std::endl;
}

float   Fixed::toFloat( void ) const
{
    return (this->fix_val);
}

int     Fixed::toInt( void ) const
{
    return (this->fix_val);
}