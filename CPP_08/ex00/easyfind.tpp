/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 03:18:11 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/18 14:45:09 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T >	/*	T must be a sequence container filled with <int> */
void	easyfind( T &a, int target)
{
	if (std::find(a.begin(), a.end(), target) == a.end())
		throw ValueNotFound();
}
