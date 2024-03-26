/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:22:22 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/23 14:23:13 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	randomChump("Josephine l'ange gardien");
	Zombie  *michel = newZombie("Michel");
	michel->announce();
	delete michel;
	randomChump("Bosetti");

	return (0);
}
