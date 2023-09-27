/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:28:10 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/27 17:12:35 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"



HumanA::HumanA( std::string name, Weapon &weapon )
{
    this->weapon = weapon;
    this->name.assign(name);
}

void    HumanA::attack( void )
{
    std::cout << this->name << " attacks with their " << weapon.GetType() << std::endl;
}