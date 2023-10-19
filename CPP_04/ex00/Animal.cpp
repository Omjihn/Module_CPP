/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:33:12 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/19 17:45:24 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
    std::cout << "[Animal] Default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "[Animal] Destructor called" << std::endl;
}

void    Animal::makeSound( void ) const
{
    std::cout << "Grwomiafrou" << std::endl;
}