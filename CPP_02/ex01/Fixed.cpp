/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:05:51 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/05 14:10:30 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
    this->fix_val = 0;
}

Fixed::Fixed( const int val )
{
    std::cout << "Int constructor called" << std::endl;
    this->fix_val = val;
}

Fixed::Fixed( const float val )
{
    std::cout << "Float constructor called" << std::endl;
    this->fix_val = val;
}

Fixed::Fixed( const Fixed &val )
{
    std::cout << "Copy constructor called" << std::endl;
    this->fix_val = val.toFloat();
}

Fixed &Fixed::operator=( const Fixed &val )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fix_val = val.toFloat();
    return (*this);
}
/*
std::ostream &Fixed::operator<<( Fixed &val)
{
    std::cout << "Copy assignment operator called" << std::endl;
    std::ostream res = (val.toFloat());
    return (res);
}
*/

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

float   Fixed::toFloat( void ) const
{
    return (this->fix_val);
}

int     Fixed::toInt( void ) const
{
    return (this->fix_val);
}