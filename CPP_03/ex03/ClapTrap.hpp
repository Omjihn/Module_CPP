/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:41:54 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/21 11:49:24 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	ClapTrap
{
	public:

		ClapTrap( void );
		ClapTrap( const std::string input_name );
		~ClapTrap();

		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		const std::string ft_get_name( void );

		unsigned int	ft_get_hit_point( void );
		unsigned int	ft_get_energy_point( void );
		unsigned int	ft_get_attack_dmg( void );

	protected:

		std::string	name;
		unsigned int	hit_point;
		unsigned int	energy_point;
		unsigned int	attack_dmg;
};
