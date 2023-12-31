/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:04:15 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/21 16:04:18 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	ft_rand(void)
{
	unsigned int	i = rand();

	i <<= 15;
	return (i >>= 14);
}

int	main(void)
{
	PhoneBook	data;
	std::string	str;

	ft_print_wellcome();
	while (1)
	{
		std::getline(std::cin, str);
		if (!std::strcmp(str.c_str(), "EXIT"))
			return (0);
		else if (!std::strcmp(str.c_str(), "--HELP"))
			ft_print_help();
		else if (!std::strcmp(str.c_str(), "ADD"))
			data.ft_add();
		else if (!std::strcmp(str.c_str(), "SEARCH"))
			data.ft_search();
	}
}
