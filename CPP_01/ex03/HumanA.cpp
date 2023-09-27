/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:28:10 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/27 19:03:51 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : weapon(weapon)
{
    this->name = name;
}

void    HumanA::attack( void )
{
    std::cout << name << " attacks with their " << weapon.GetType() << std::endl;
}