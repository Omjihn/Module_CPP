/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:22:57 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/23 15:23:00 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
    this->name = "";
}

Zombie::Zombie( std::string name )
{
    this->name = name;
}

Zombie::~Zombie( void )
{
    if (this->name.length())
        std::cout << this->name << " nous a quitte... On lui souhaite un bon courage." << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
