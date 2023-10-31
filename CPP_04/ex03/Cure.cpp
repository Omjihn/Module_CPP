/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:23:11 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/31 15:12:07 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : type("cure")
{
    std::cout << "[Cure] Default constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "[Cure] Destructor called" << std::endl;
}

void    Cure::use( ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}