/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:20:22 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/31 15:11:59 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : type("ice")
{
    std::cout << "[Ice] Default constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "[Ice] Destructor called" << std::endl;
}



void    Ice::use( ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}