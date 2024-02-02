/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:23:47 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/02 15:48:11 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertionTypes.h"

int	main( int ac, char **av )
{
	if (ac != 2)
	{
		std::cout << "Error please enter 1 argument ex: \n" <<
			"./Converter [any number]" << std::endl;
		return 0;
	}
	ScalarConverter::convert(av[1]);
	return(0);
}