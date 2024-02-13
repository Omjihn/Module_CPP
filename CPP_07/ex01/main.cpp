/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 05:00:09 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/13 09:27:25 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"
#include <unistd.h>
#include <cstdlib>

int	main(void)
{

	/*		1ST TEST		*/

	std::cout << "1st test :" << std::endl;
	std::srand(getpid());
	int arr_len = 5;
	int arr[arr_len] = {	std::rand(),
							std::rand(),
							std::rand(),
							std::rand(),
							std::rand() };

	std::cout << "arr = " << std::endl;
	for (int i = 0; i < arr_len; i++)
		print_val(arr[i]);
	iter(arr, arr_len, remplace_even_odd);
	std::cout << "arr = " << std::endl;
	for (int i = 0; i < arr_len; i++)
		print_val(arr[i]);

	/*		2ND TEST		*/

	std::cout << "2nd test :" << std::endl;
	char	arr1[arr_len] = {	'S',
								'a',
								'l',
								'u',
								't' };
	std::cout << "arr = " << std::endl;
	for (int i = 0; i < arr_len; i++)
		print_val(arr1[i]);
	iter(arr1, arr_len, remplace_even_odd);
	std::cout << "arr = " << std::endl;
	for (int i = 0; i < arr_len; i++)
		print_val(arr1[i]);
	return (0);
}