/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:36:26 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/21 18:00:31 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class	Span
{
	private :

		std::vector<int>		Array;
		unsigned int	index;

	public :

		/*		CONSTRUCTORS/DESTRUCTOR		*/

		Span( void );
		Span( unsigned int n );
		Span( Span &val );
		~Span();

		/*		OPERATOR OVERLOADING		*/

		Span	&operator=( Span &val );

		/*		MEMBERS FUNCTIONS		*/

		void	addNumber( int nb );
		void	printContent( void );

		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );

		/*		EXCEPTION CLASS		*/

		class	NoMoreSpaceLeft : public std::exception
		{
			public:

				virtual const char* what( void ) const throw();
		};
};

#endif