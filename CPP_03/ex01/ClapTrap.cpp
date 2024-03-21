/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:41:59 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/21 10:53:57 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("ClapTrap")
{
	std::cout << "[ClapTrap] Default constructor called" << std::endl;
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_dmg = 0;
}

ClapTrap::ClapTrap( const std::string input_name ) : name(input_name)
{
	std::cout << "[ClapTrap] String constructor called" << std::endl;
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_dmg = 0;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "[ClapTrap] Destructor called" << std::endl;
}

void    ClapTrap::attack( const std::string &target )
{
	if (hit_point == 0)
	{
		std::cout << "ClapTrap " << this->name << " is knock-out it can't do anthing :(" << std::endl;
		return ;
	}
	else if (energy_point == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy left it can't do anything :(" << std::endl;
		return ;
	}
	this->energy_point--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_dmg << " HP !" << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
	if (hit_point == 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dying on the ground but it's getting attacked, hard life :/" << std::endl;
		return ;
	}
	if (this->hit_point >= amount)
		this->hit_point -= amount;
	else
		this->hit_point = 0;
	std::cout << "ClapTrap " << this->name << " is getting attacked and loose " << amount << " HP." << std::endl;
	if (hit_point == 0)
		std::cout << "ClapTrap " << this->name << " is now knocked-out." << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " has " << this->hit_point << " HP left." << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
	if (hit_point == 0)
	{
		std::cout << "ClapTrap " << this->name << " is knock-out it can't do anthing :(" << std::endl;
		return ;
	}
	else if (energy_point == 0)
	{
		std::cout << "ClapTrap " << this->name << " can't repair itself.. No more energy left :(" << std::endl;
		return ;
	}
	this->energy_point--;
	this->hit_point += amount;
	std::cout << "ClapTrap " << this->name << " is getting repaired and gets " << amount << " HP !" << std::endl;
}

const std::string   ClapTrap::ft_get_name( void )
{
	return (this->name);
}

unsigned int    ClapTrap::ft_get_hit_point( void )
{
	return (this->hit_point);
}

unsigned int    ClapTrap::ft_get_energy_point( void )
{
	return (this->energy_point);
}

unsigned int    ClapTrap::ft_get_attack_dmg( void )
{
	return (this->attack_dmg);
}