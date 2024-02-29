/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:32:35 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/27 10:48:31 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T >
MutantStack< T >::MutantStack( void )
{
	std::cout << "[MutantStack] Default constructor called" << std::endl;
}

template < typename T >
MutantStack< T >::MutantStack( MutantStack< T > &val )
{
	std::cout << "[MutantStack] Default constructor called" << std::endl;
}

template < typename T >
MutantStack< T >::MutantStack( std::stack< T > &val )
{
	std::cout << "[MutantStack] Default constructor called" << std::endl;
}

template < typename T >
MutantStack< T >::~MutantStack( )
{
	std::cout << "[MutantStack] Destructor called" << std::endl;
}