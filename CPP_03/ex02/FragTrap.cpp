/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:09:22 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/16 14:30:37 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("FragTrap")
{
    std::cout << "[FragTrap] Default constructor called" << std::endl;
    ft_set_hit_point(100);
    ft_set_energy_point(100);
    ft_set_attack_dmg(30);
}

FragTrap::FragTrap( const std::string name ) : ClapTrap(name)
{
    std::cout << "[FragTrap] Default constructor called" << std::endl;
    ft_set_hit_point(100);
    ft_set_energy_point(100);
    ft_set_attack_dmg(30);
}

FragTrap::~FragTrap( void )
{
    std::cout << "[FragTrap] Destructor called" << std::endl;
}

void    FragTrap::highFivesGuys( void )
{
    if (ft_get_hit_point() == 0)
        std::cout << "FragTrap " << ft_get_name() << " is trying to regroup for a high fives while dying." << std::endl;
    else
        std::cout << "FragTrap " << ft_get_name() << " is asking for high fives." << std::endl;
}