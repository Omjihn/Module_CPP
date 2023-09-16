/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:07:10 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/16 15:06:42 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	tab = 1;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (av[tab])
	{
		i = 0;
		while (av[tab][i])
		{
			if (av[tab][i] >= 'a' && av[tab][i] <= 'z')
				av[tab][i] -= 32;
			i++;
		}
		std::cout << av[tab++];
	}
	std::cout << "\n";
	return (0);
}
