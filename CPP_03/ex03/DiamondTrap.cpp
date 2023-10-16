/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:49:07 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/16 18:50:49 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : name("DiamondTrap") 
{
    std::cout << "[DiamondTrap] Default constructor called" << std::endl;
    ft_set_hit_point(FragTrap::ft_get_hit_point());
    ft_set_energy_point(ScavTrap::ft_get_energy_point());
    ft_set_attack_dmg(FragTrap::ft_get_attack_dmg());
}

DiamondTrap::DiamondTrap( const std::string input_name ) : name(input_name) 
{
    std::cout << "[DiamondTrap] String constructor called" << std::endl;
    ft_set_hit_point(FragTrap::ft_get_hit_point());
    ft_set_energy_point(ScavTrap::ft_get_energy_point());
    ft_set_attack_dmg(FragTrap::ft_get_attack_dmg());
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

