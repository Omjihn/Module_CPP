/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:18:25 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/19 17:53:18 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : type("Cat")
{
    std::cout << "[Cat] Default constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "[Cat] Destructor called" << std::endl;
}

const std::string   Cat::getType( void )
{
    return (this->type);
}

void    Cat::makeSound( void )
{
    std::cout << "Meow" << std::endl;
}