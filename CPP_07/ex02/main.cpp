/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:19:01 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/18 14:59:01 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define	TAB_LEN 20

int	main(void)
{
	Array<int>	tab(TAB_LEN);

	for (unsigned int i = 0; i < tab.size(); i++)
	{
		tab[i] = i * 4;
	}
	for (unsigned int i = 0; i < tab.size(); i++)
	{
		std::cout << "tab[" << i << "]\t= " << tab[i] << std::endl;
	}

	Array<int>	tab1 = tab;
	Array<int>	tab2(tab1);

	std::cout << "Result of the copy in tab1 :" << std::endl;
	for (unsigned int i = 0; i < tab1.size(); i++)
	{
		std::cout << "tab[" << i << "]\t= " << tab1[i] << std::endl;
	}
	std::cout << "Result of the copy in tab2 :" << std::endl;
	for (unsigned int i = 0; i < tab2.size(); i++)
	{
		std::cout << "tab[" << i << "]\t= " << tab2[i] << std::endl;
	}

	std::cout << "The size should be " << TAB_LEN \
			<< ", tab.size() = " << tab.size() << std::endl;

	try
	{
		tab[tab.size()] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		tab[-1] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<int>	tab0;

	std::cout << "tab0 should be size 0, tab0.size() = " \
				<< tab0.size() << std::endl;

	std::cout << "Trying to access tab0[0]" << std::endl;
	try
	{
		std::cout << tab0[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}