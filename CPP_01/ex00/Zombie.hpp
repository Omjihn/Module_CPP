/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:23:09 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/23 14:30:23 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Zombie
{
	public:

		Zombie( std::string name );
		~Zombie();

		void	announce( void );

	private:

		std::string	_name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
