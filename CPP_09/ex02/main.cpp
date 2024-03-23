/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:18:00 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/23 09:56:11 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	printBeforeAfter( int &ac, char **av )
{
	std::vector< int >	nb;

		std::cout << "Before:	";
	for(int i = 1; i < ac && i <= 5; i++)
	{
		std::istringstream	iss(av[i]);
		int					add;
		iss >> add;
		nb.push_back(add);
		std::cout << av[i] << " ";
	}
	if (6 < ac)
		std::cout << "[...]";
	std::cout << std::endl;
	std::cout << "After:	";
	std::sort(nb.begin(), nb.end());
	for ( std::vector<int>::iterator it = nb.begin(); it != nb.end(); it++)
		std::cout << *it << " ";
	if (6 < ac)
		std::cout << "[...]";
	std::cout << std::endl;
}

int	main( int ac, char **av )
{
	if (ac < 2)
	{
		std::cerr << "Error: You need to enter a integers sequence." << std::endl;
		return (1);
	}
	PmergeMe	sort( ac, av );
	if (sort.isError())
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}
	printBeforeAfter( ac, av );
	sort.dequeSorting( ac, av );
	sort.vectorSorting( ac, av );

	return (0);
}