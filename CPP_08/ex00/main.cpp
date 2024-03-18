/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 03:17:11 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/18 10:53:17 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.h"

#define NB_TESTS 6

template < typename T >
void	init_container( T &a )
{
	for (unsigned int i = 0; i < a.size(); i++)
		a.at(i) = i;
}

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
void	exec_tests( T &a, int *test_values )
{
	for (unsigned int i = 0; i < NB_TESTS; i++)
		try_ezfind(a, test_values[i]);
}

int	main(void)
{
	int	test_values[] = {5, 15, 10, 9, 0, -1};

	std::cout << "Vector test : {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}" << std::endl;
	std::vector<int>	v(10);

	init_container(v);

	exec_tests(v, test_values);

/* 	std::string	test_values[] = {"Hello", "World", "How", "Are", "You"};

	std::cout << "Vector test : {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}" << std::endl;
	std::vector< std::string >	v_string(10);

	v_string.push_back(std::string("Hello"));
	v_string.push_back(std::string("World"));
	v_string.push_back(std::string("How"));
	v_string.push_back(std::string("'s'"));
	v_string.push_back(std::string("Doing"));

	exec_tests(v, test_values); */

/*	-------------------------------------------------------------------------	*/

	std::cout << std::endl << "Deque test : {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}" << std::endl;
	std::deque<int> d(10);

	init_container(d);

	exec_tests(d, test_values);

	return (0);
}
