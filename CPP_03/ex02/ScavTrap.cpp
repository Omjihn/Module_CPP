/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:25:26 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/16 14:27:48 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
    std::cout << "[ScavTrap] Default constructor called" << std::endl;
    ft_set_hit_point(100);
    ft_set_energy_point(50);
    ft_set_attack_dmg(20);
}

ScavTrap::ScavTrap( const std::string name ) : ClapTrap(name)
{
    std::cout << "[ScavTrap] String constructor called" << std::endl;
    ft_set_hit_point(100);
    ft_set_energy_point(50);
    ft_set_attack_dmg(20);
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "[ScavTrap] Destructor called" << std::endl;
}

void    ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap " << ft_get_name() << " is now in gate keeper mode." << std::endl;
}