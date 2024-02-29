/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 05:00:29 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/18 14:26:54 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >
void	print_val( T &i )
{
	std::cout << '\t' << i << std::endl;
}

template< typename A, typename L >
void	iter( A *array, L lenght, void (*func)(A const &val) )
{
	if (!array || !func)
		return ;
	for (int i = 0; i < lenght; i++)
		func(array[i]);
}
