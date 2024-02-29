/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:36:46 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/27 10:57:05 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template < typename T >
class	MutantStack : public std::stack< T >
{

	public:

		/*		CONSTRUCTORS/DESTRUCTOR		*/

		MutantStack( void );
		MutantStack( MutantStack< T > &val );
		MutantStack( std::stack< T > &val );
		~MutantStack();

		/* class	iterator
		{
			std::stack< T >
		} */
};

# include "MutantStack.tpp"

#endif