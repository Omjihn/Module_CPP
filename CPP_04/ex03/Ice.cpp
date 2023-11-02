/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:20:22 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/02 11:22:15 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
    std::cout << "[Ice] Default constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "[Ice] Destructor called" << std::endl;
}

AMateria    *Ice::clone( void ) const
{
    return (new Ice());
}

void    Ice::use( ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}