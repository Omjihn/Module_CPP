/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:36:26 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/18 14:52:28 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>
# include <limits.h>
# include <unistd.h>


class	Span
{
	private :

		std::vector<int>		Array;
		unsigned int	index;

	public :

		/*		CONSTRUCTORS/DESTRUCTOR		*/

		Span( void );
		Span( unsigned int n );
		Span( const Span &val );
		~Span();

		/*		OPERATOR OVERLOADING		*/

		Span	&operator=( const Span &val );

		/*		MEMBERS FUNCTIONS		*/

		void	addNumber( int nb );
		void	addRandNumbers( void );
		void	printContent( void );

		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );

		/*		EXCEPTIONS CLASSES		*/

		class	NoMoreSpaceLeft : public std::exception
		{
			public:

				virtual const char* what( void ) const throw();
		};
		
		class	NotEnoughNumbers : public std::exception
		{
			public:

				virtual const char* what( void ) const throw();
		};
};

#endif