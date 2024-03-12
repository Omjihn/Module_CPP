/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:18:00 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/12 17:22:16 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main( int ac, char **av )
{
	if (ac < 2)
	{
		std::cerr << "Error: You need to enter a integers sequence." << std::endl;
		return (1);
	}
	std::cout << "Before:	";
	for(int i = 1; i < ac && i <= 5; i++) // debug
		std::cout << av[i] << " ";
	if (6 < ac)
		std::cout << "[...]";
	std::cout << std::endl;
	PmergeMe	sort( ac, av );
	if (sort.isError())
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}
	//sort.mapSorting( ac, av );
	sort.vectorSorting( ac, av );

	return (0);
}