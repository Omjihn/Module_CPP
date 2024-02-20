/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 03:17:11 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/20 11:56:25 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.h"

template < typename T >
void	try_ezfind( T &a, int target)
{
	std::cout << "easyfind value : " << target << std::endl;
	try
	{
		easyfind(a, target);
		std::cout << "The value has been found" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception encoutered : " << e.what() << std::endl;
	}
}

template < typename T >
void	init_container( T &a )
{
	for (unsigned int i = 0; i < a.size(); i++)
		a.at(i) = i;
}

int	main(void)
{
	std::cout << "Vector test : {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}" << std::endl;
	std::vector<int> v(10);

	init_container(v);

	try_ezfind(v, 5);
	try_ezfind(v, 15);
	try_ezfind(v, 10);
	try_ezfind(v, 9);
	try_ezfind(v, 0);
	try_ezfind(v, -1);

/*	-------------------------------------------------------------------------	*/

	std::cout << std::endl << "Deque test : {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}" << std::endl;
	std::deque<int> d(10);

	init_container(d);

	try_ezfind(d, 5);
	try_ezfind(d, 15);
	try_ezfind(d, 10);
	try_ezfind(d, 9);
	try_ezfind(d, 0);
	try_ezfind(d, -1);

	return (0);
}
