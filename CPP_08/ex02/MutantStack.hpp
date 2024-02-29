/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:36:46 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/29 14:32:09 by gbricot          ###   ########.fr       */
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
		MutantStack( std::stack< T > &val );
		~MutantStack( );

		/*		OPERATOR OVERLOADING		*/

		//MutantStack	&operator=( MutanStack &val );

		/*		ITERATOR DECLARATION		*/

		typedef typename std::stack< T >::container_type::iterator	iterator;

		/*		MEMBERS FUNCTIONS		*/

		iterator	begin( void );/*
		{
			return (std::stack< T >::c.begin());
		}
*/
		iterator        end( void );/*
		{
			return (std::stack< T >::c.end());
		}
*/
};

# include "MutantStack.tpp"

#endif
