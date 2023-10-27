/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:33:12 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/27 14:03:02 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("")
{
    std::cout << "[Animal] Default constructor called" << std::endl;
}

Animal::Animal( const std::string animal_type ) : type(animal_type)
{
    std::cout << "[Animal] String constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "[Animal] Destructor called" << std::endl;
}

void    Animal::makeSound( void ) const
{
    if (!this->type.compare("Dog"))
        std::cout << "Wouf 🐶" << std::endl;
    else if (!this->type.compare("Cat"))
        std::cout << "Meoww 🐱" << std::endl;
    else
        std::cout << "Grwomiafrou ❓" << std::endl;
}

const std::string   Animal::getType( void ) const
{
    if (!this->type.size())
        return ("Random animal");
    return (this->type);
}