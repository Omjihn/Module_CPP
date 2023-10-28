/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:31:32 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/28 09:19:08 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("")
{
    std::cout << "[WrongAnimal] Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string animal_type ) : type(animal_type)
{
    std::cout << "[WrongAnimal] String constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

void    WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongGrrr ❓" << std::endl;
}

const std::string   WrongAnimal::getType( void ) const
{
    if (!this->type.size())
        return ("Wrong Random animal");
    return (this->type);
}