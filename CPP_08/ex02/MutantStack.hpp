/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:36:46 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/18 15:56:54 by gbricot          ###   ########.fr       */
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

		MutantStack	&operator=( const MutantStack &val );

		/*		ITERATOR DECLARATION		*/

		typedef typename std::stack< T >::container_type::iterator	iterator;

		/*		MEMBERS FUNCTIONS		*/

		iterator	begin( void );
		iterator	end( void );
};

# include "MutantStack.tpp"

#endif
