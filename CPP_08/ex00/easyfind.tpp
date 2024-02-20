/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 03:18:11 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/20 11:30:21 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T >	/*	T must be a sequence container filled with integers	*/
int	easyfind( T &a, int target)
{
	
	for (typename T::iterator it = a.begin(); it != a.end(); it++)
	{
		if (*it == target)
			return target;
	}
	throw ValueNotFound();
}