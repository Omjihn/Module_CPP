/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:19:01 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/17 20:25:22 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int>	tab(20);

	for (unsigned int i = 0; i < tab.size(); i++)
	{
		tab[i] = i * 4;
	}
	for (unsigned int i = 0; i < tab.size(); i++)
	{
		std::cout << "tab[" << i << "]\t= " << tab[i] << std::endl;
	}
	return 0;
}