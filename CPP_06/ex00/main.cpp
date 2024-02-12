/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:23:47 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/12 13:07:35 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main( int ac, char **av )
{
	if (ac != 2)
	{
		std::cout << "Error please enter 1 argument ex: \n" <<
			"./convert [any number]" << std::endl;
		return 1;
	}
	ScalarConverter::convert(av[1]);
	return(0);
}
