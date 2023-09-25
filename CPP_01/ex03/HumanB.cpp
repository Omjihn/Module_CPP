/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:28:13 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/25 17:07:25 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
    this->name = name;
}

void    HumanB::setWeapon( Weapon weapon )
{
    this->weapon = &weapon;
}

void    HumanB::attack( void )
{
    std::cout << this->name << " attacks with their " << this->weapon->GetType().c_str() << std::endl;
}