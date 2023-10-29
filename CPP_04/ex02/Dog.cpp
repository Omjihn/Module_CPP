/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:18:23 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/29 17:05:39 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
    std::cout << "[Dog] Default constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "[Dog] Destructor called" << std::endl;
    delete this->brain;
}

void    Dog::makeSound( void ) const 
{
    std::cout << "Wouf 🐶" << std::endl;
}