/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 05:00:09 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/13 05:19:21 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"
#include <unistd.h>
#include <cstdlib>

int	main(void)
{
	std::srand(getpid());
	int arr_len = 5;
	int arr[arr_len] = {	std::rand(),
							std::rand(),
							std::rand(),
							std::rand(),
							std::rand() };

	std::cout << "arr = " << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << '\t' << arr[i] << std::endl;
	iter(arr, arr_len, remplace_even_odd);
	std::cout << "arr = " << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << '\t' << arr[i] << std::endl;
}