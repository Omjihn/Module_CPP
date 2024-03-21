/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:24:52 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/21 11:35:03 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:

		ScavTrap( void );
		ScavTrap( const std::string input_name );
		~ScavTrap();

		void	guardGate( void );
};
