/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 05:00:09 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/18 14:17:09 by gbricot          ###   ########.fr       */
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
	int arr[5] = {	std::rand(),
							std::rand(),
							std::rand(),
							std::rand(),
							std::rand() };

	std::cout << "arr = " << std::endl;
	iter(arr, arr_len, print_val);

	/*		2ND TEST		*/

	std::cout << "2nd test :" << std::endl;
	char	arr1[5] = {	'S',
								'a',
								'l',
								'u',
								't' };

	std::cout << "arr1 = " << std::endl;
	iter(arr1, arr_len, print_val);

	/*		3RD TEST		*/

	std::cout << "3rd test :" << std::endl;
	std::string	arr2[5] = {	"Lorem",
									"Ipsum",
									"dolor",
									"sit",
									"amet" };
	std::cout << "arr2 = " << std::endl;
	iter(arr2, arr_len, print_val);
	
	return (0);
}
