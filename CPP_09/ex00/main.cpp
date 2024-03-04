/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:58:29 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/04 15:43:54 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <cstdlib>

int	main( int ac, char **av )
{
 	if (ac != 2)
	{
		std::cerr << ERR_ARG << std::endl;
		return (1);
	}
	BitcoinExchange	bc(av[1]);
	if (bc.error())
		return (1);
	return (0); 
}