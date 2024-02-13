/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 04:31:25 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/13 04:53:53 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >
T	max( T const &x, T const &y )
{
	if (x < y)
		return (y);
	return (x);
}

template< typename T >
T	min( T const &x, T const &y )
{
	if (y < x)
		return (y);
	return (x);
}

template< typename T >
void	swap( T &x, T &y)
{
	T	temp = x;
	x = y;
	y = temp;
}