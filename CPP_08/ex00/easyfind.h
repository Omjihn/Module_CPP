/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 03:18:12 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/20 11:37:17 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>

class	ValueNotFound : public std::exception
{
	public:

		virtual const char* what( void ) const throw() {
			return ("Value not found");	}
};

#include "easyfind.tpp"