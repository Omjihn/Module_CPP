/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:28:13 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/27 16:15:21 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
    this->name.assign(name);
}

void    HumanB::setWeapon( Weapon &weapon )
{
    this->weapon = weapon;
}

void    HumanB::attack( void )
{
    std::cout << this->name << " attacks with their " << this->weapon.GetType() << std::endl;
}