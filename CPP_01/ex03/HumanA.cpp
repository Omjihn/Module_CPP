/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:28:10 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/25 17:07:21 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon weapon )
{
    this->weapon = &weapon;
    this->name = name;
}

void    HumanA::setWeapon(Weapon weapon)
{
    this->weapon = &weapon;
}

void    HumanA::attack( void )
{
    std::cout << this->name << " attacks with their " << this->weapon->GetType().c_str() << std::endl;
}