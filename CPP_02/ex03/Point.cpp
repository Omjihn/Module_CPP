/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:57:57 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/12 17:06:26 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    //std::cout << "[Point] Default constructor called" << std::endl;   
}

Point::Point( const float x, const float y) : x(x), y(y)
{
    //std::cout << "[Point] Float constructor called" << std::endl;
}

Point::Point( const Point &cpy) : x(cpy.x) ,y(cpy.y)
{
    //std::cout << "[Point] Copy constructor called" << std::endl;   
}

Point   &Point::operator=( const Point &var )
{
    //std::cout << "[Point] Copy assignment operator called" << std::endl;
    (void) var;
    return (*this);
}

Point::~Point()
{
    //std::cout << "[Point] Destructor called" << std::endl;
}

float   Point::get_x( void ) const
{
    return (x.toFloat());
}

float   Point::get_y( void ) const 
{
    return (y.toFloat());
}

const Fixed   &Point::get_fix_x( void ) const
{
    return (x);
}

const Fixed   &Point::get_fix_y( void ) const
{
    return (y);
}