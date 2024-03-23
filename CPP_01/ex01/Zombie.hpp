/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:23:09 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/23 14:23:28 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class	Zombie
{
	public:

		Zombie( void );
		Zombie( std::string name );
		~Zombie();

		void	announce( void );

		void	setName( std::string name );

	private:

		std::string	_name;
};

Zombie	*zombieHorde( int N, std::string name );
