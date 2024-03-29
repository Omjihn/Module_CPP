/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:09:22 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/21 11:07:23 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("FragTrap")
{
	std::cout << "[FragTrap] Default constructor called" << std::endl;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_dmg = 30;
}

FragTrap::FragTrap( const std::string input_name ) : ClapTrap(input_name)
{
	std::cout << "[FragTrap] Default constructor called" << std::endl;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_dmg = 30;
}

FragTrap::~FragTrap( void )
{
	std::cout << "[FragTrap] Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	if (this->hit_point == 0)
		std::cout << "FragTrap " << this->name << " is trying to regroup for a high fives while dying." << std::endl;
	else
		std::cout << "FragTrap " << this->name << " is asking for high fives." << std::endl;
}
