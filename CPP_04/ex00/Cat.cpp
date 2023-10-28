/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:18:25 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/28 09:24:12 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
    std::cout << "[Cat] Default constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "[Cat] Destructor called" << std::endl;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Meoww  🐱" << std::endl;
}