/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:49:07 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/21 11:49:49 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) :	ClapTrap("DiamondTrap_clap_name"), \
									FragTrap("DiamondTrap_clap_name"), \
									ScavTrap("DiamondTrap_clap_name")
{
	std::cout << "[DiamondTrap] Default constructor called" << std::endl;
	this->diamond_name = "DiamondTrap";
	FragTrap::hit_point = 100;
	ScavTrap::energy_point = 50;
	FragTrap::attack_dmg = 30;
}

DiamondTrap::DiamondTrap( std::string input_name ) :		ClapTrap(input_name), \
															FragTrap(input_name), \
															ScavTrap(input_name)
{
	std::cout << "[DiamondTrap] String constructor called" << std::endl;
	this->diamond_name = input_name;
	ClapTrap::name = diamond_name + std::string("_clap_name");
	FragTrap::hit_point = 100;
	ScavTrap::energy_point = 50;
	FragTrap::attack_dmg = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "[DiamondTrap] DiamondTrap name: " << this->diamond_name << std::endl;
	std::cout << "[DiamondTrap] ClapTrap name: " << ClapTrap::name << std::endl;
}

const std::string	DiamondTrap::ft_get_name_diamond( void )
{
	return (diamond_name);
}