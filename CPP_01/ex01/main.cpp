/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:22:22 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/23 14:24:05 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int nb_zombies = 5;
	Zombie *horde = zombieHorde(nb_zombies, "Bosetti");
	Zombie *horde_2 = zombieHorde(nb_zombies, "Josephine l'ange gardien");
	int i = 0;
	while (i < nb_zombies)
	{
		horde[i].announce();
		horde_2[i++].announce();
	}
	delete[] horde_2;
	delete[] horde;
	return (0);
}