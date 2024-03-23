/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:32:35 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/18 15:59:08 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*		CONSTRUCTORS/DESTRUCTOR		*/

template < typename T >
MutantStack< T >::MutantStack( void )
{

}

template < typename T >
MutantStack< T >::MutantStack( std::stack< T > &val ) : std::stack< T >(val)
{

}

template < typename T >
MutantStack< T >::~MutantStack( )
{

}

template < typename T >
MutantStack< T >	&MutantStack< T >::operator=( const MutantStack< T > &val )
{
	if (this != &val)
		std::stack< T >::operator=(val);
	return (*this);
}

/*		MEMBERS FUNCTIONS		*/


template < typename T >
typename MutantStack< T >::iterator	MutantStack< T >::begin( void )
{
	return (std::stack< T >::c.begin());
}

template < typename T >
typename MutantStack< T >::iterator	MutantStack< T >::end( void )
{
	return (std::stack< T >::c.end());
}
