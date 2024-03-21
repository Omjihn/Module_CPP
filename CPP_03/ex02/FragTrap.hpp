/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:09:24 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/21 11:04:57 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:

		FragTrap( void );
		FragTrap( const std::string input_name );
		~FragTrap();

		void	highFivesGuys( void );
};
