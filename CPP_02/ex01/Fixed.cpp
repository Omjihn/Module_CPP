/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:05:51 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/11 16:26:51 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
    fix_val = 0;
}

Fixed::Fixed( const int val )
{
    std::cout << "Int constructor called" << std::endl;
    fix_val = val << fract_bit_nb;
}

Fixed::Fixed( const float val )
{
    std::cout << "Float constructor called" << std::endl;
    fix_val = roundf(val * (1 << fract_bit_nb));
}

Fixed::Fixed( const Fixed &val )
{
    std::cout << "Copy constructor called" << std::endl;
    fix_val = val.fix_val;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=( const Fixed &val )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fix_val = val.fix_val;
    return (*this);
}

std::ostream    &operator<<( std::ostream &output, const Fixed &val )
{
    output << val.toFloat();
    return (output);
}

float   Fixed::toFloat( void ) const
{
    return ((float) fix_val / (1 << fract_bit_nb));
}

int     Fixed::toInt( void ) const
{
    return (fix_val / (1 << fract_bit_nb));
}