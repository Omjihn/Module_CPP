/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:31:32 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/17 20:34:58 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template < typename T >
class	Array
{

	private:

		/*		CLASS VARIABLES		*/

		T				*array;
		unsigned int	_size;

	public:

		/*		CONSTRUCTORS/DESTRUCTOR		*/

		Array( void );
		Array( Array &cpy );
		Array( unsigned int n );
		~Array();

		/*		OPERATORS OVERLOADING		*/

		Array	&operator=( Array &val );
		T		&operator[]( int index );
		T		&operator[]( unsigned int index );

		/*		MEMBERS FUNCTIONS		*/

		unsigned int	size( void ) const ;

		/*		EXCEPTION CLASS		*/

		class	OutOfBoundsException : public std::exception
		{
			public:

				virtual const char* what( void ) const throw();
		};
};

# include "Array.tpp"

#endif