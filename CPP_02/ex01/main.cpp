/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:05:47 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/03 14:58:16 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &os, Fixed const &m)
{ 
    return os << m.toFloat();
}

int main(void)
{
    std::cout << "a :" << std::endl;
    Fixed a;
    std::cout << "b :" << std::endl;
    Fixed const b( 10 );
    std::cout << "c :" << std::endl;
    Fixed const c( 42.42f );
    std::cout << "d :" << std::endl;
    Fixed const d( b );
    std::cout << "a :" << std::endl;
    a = Fixed( 1234.4321f );
    
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}