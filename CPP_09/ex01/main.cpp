/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:47:21 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/07 17:10:12 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: Wrong number of argument\n" \
			<< "Usage: ./RPN \"Any polish mathematical expression\"\n" \
			<< "Please note that your expression can't contain parenthesis" << std::endl;
		return (1);
	}
	RPN	math(av[1]);
	
	if (!math.doTheMaths())
		return (1);
	return (0);
}