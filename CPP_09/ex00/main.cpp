/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:58:29 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/04 18:22:51 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <cstdlib>

int	main( int ac, char **av )
{
 	if (ac != 2)
	{
		std::cerr << ERR_FILE << std::endl;
		return (1);
	}
	BitcoinExchange	bc;
	if (bc.error())
		return (1);
	bc.readInput( av[1] );
	return (0); 
}