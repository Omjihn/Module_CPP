/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:34:14 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/29 17:06:55 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
    std::cout << "[WrongCat] Default constructor called" << std::endl;
    this->brain = new Brain();
}

WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] Destructor called" << std::endl;
    delete this->brain;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "Wrongmeoww 🐱" << std::endl;
}