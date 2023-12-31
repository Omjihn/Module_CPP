/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:34:14 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/28 09:24:18 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
    std::cout << "[WrongCat] Default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] Destructor called" << std::endl;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "WrongMeoww  🐱" << std::endl;
}