/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:41:59 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/15 20:05:06 by gbricot          ###   ########.fr       */
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

ClapTrap::ClapTrap( const std::string name ) : name(name)
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
    if (energy_point <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energy left it can't do anything :(" << std::endl;
        return ;
    }
    else if (hit_point <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is knock-out it can't do anthing :(" << std::endl;
        return ;
    }
    this->energy_point--;
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_dmg << " points of damage !" << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (hit_point <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is already dying on the ground but it's getting attacked hard life :/" << std::endl;
        return ;
    }
    this->hit_point -= amount;
    std::cout << "ClapTrap " << this->name << " is getting attacked and loose " << amount << " HP." << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (energy_point <= 0)
    {
        std::cout << "ClapTrap " << this->name << " can't repair itself.. No more energy left :(" << std::endl;
        return ;
    }
    this->energy_point--;
    this->hit_point += amount;
    std::cout << "ClapTrap " << this->name << " is getting repaired and gets " << amount << " HP !" << std::endl;
}