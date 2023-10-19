/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:18:23 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/19 17:53:51 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : type("Dog") 
{
    std::cout << "[Dog] Default constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "[Dog] Destructor called" << std::endl;
}

const std::string   Dog::getType( void )
{
    return (this->type);
}

void    Dog::makeSound( void )
{
    std::cout << "Wouf" << std::endl;
}