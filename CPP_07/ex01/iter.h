/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 05:00:29 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/13 05:20:28 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >
void	remplace_even_odd( T &i )
{
	if (i & 1)
		i = 0;
	else
		i = 1;
}

template< typename A, typename L, typename F >
void	iter( A *array, L &lenght, F &func )
{
	if (!array || !func)
		return ;
	for (int i = 0; i < lenght; i++)
		func(array[i]);
}