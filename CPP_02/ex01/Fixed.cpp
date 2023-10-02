/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:05:51 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/02 16:10:56 by gbricot          ###   ########.fr       */
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
    std::cout << "Int constructor called" << std::endl;
    this->fix_val = val;
}

Fixed::Fixed( Fixed &val )
{
    std::cout << "Copy constructor called" << std::endl;
    this->fix_val = val.getRawBits();
}

Fixed & Fixed::operator=(Fixed &val)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fix_val = val.getRawBits();
    return (*this);
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fix_val);
}

void    Fixed::setRawBits( int const raw )
{
    this->fix_val = raw;
}