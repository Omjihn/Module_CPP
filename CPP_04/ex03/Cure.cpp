/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:23:11 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/02 11:16:47 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
    std::cout << "[Cure] Default constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "[Cure] Destructor called" << std::endl;
}

AMateria    *Cure::clone( void ) const
{
    return (new Cure());
}

void    Cure::use( ICharacter &target )
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}