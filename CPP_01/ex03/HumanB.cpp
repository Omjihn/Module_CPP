/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:28:13 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/27 20:32:11 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
    this->name = name;
    this->weapon = nullptr;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack( void )
{
    if (!this->weapon)
        std::cout << this->name << " attacks with their fists" << std::endl;
    else
        std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}