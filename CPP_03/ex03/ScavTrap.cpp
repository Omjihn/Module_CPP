/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:25:26 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/21 11:07:27 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "[ScavTrap] Default constructor called" << std::endl;
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_dmg = 20;
}

ScavTrap::ScavTrap( const std::string input_name ) : ClapTrap(input_name)
{
	std::cout << "[ScavTrap] String constructor called" << std::endl;
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_dmg = 20;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "[ScavTrap] Destructor called" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->name << " is now in gate keeper mode" << std::endl;
}
