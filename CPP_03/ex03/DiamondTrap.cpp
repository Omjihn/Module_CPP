/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:49:07 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/19 11:16:30 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("DiamondTrap_clap_name"), name("DiamondTrap")
{
    std::cout << "[DiamondTrap] Default constructor called" << std::endl;
    ft_set_hit_point(100);
    ft_set_energy_point(50);
    ft_set_attack_dmg(30);
}

DiamondTrap::DiamondTrap( std::string input_name ) : ClapTrap(input_name.insert(input_name.size(), "_clap_name")), name(input_name.erase(input_name.size() - 10, 10))
{
    std::cout << "[DiamondTrap] String constructor called" << std::endl;
    ft_set_hit_point(100);
    ft_set_energy_point(50);
    ft_set_attack_dmg(30);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

void    DiamondTrap::whoAmI( void )
{
    std::cout << "[DiamondTrap] DiamondTrap name: " << this->name << std::endl;
    std::cout << "[DiamondTrap] ClapTrap name: " << ft_get_name() << std::endl;
}

const std::string   DiamondTrap::ft_get_name_diamond( void )
{
    return (name);
}