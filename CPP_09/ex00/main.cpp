/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:58:29 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/01 13:27:38 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		std::cout << "Error : wrong number of argument, Usage: ./btc [file.csv]" << std::endl;
		return (1);
	}
	std::ifstream	file(av[1], );
}