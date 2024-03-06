/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:40:23 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/06 10:14:06 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DATE_HPP
# define DATE_HPP

# include <iostream>
# include <sstream>
# include <cstdio>

class Date
{
	private:

		/*		PRIVATE MEMBERS VARIABLES		*/

		unsigned int	_year;
		unsigned char	_month;
		unsigned char	_day;
		bool			_error;

	public:

		/*		CONSTRUCTORS/DESTRUCTOR		*/

		Date( void );
		Date( std::string &str );
		Date( Date &val );
		~Date( );

		/*		OPERATORS OVERLOADING		*/

		Date	&operator=( Date &cpy );
		bool	operator>=( const Date &cmp ) const;
		bool	operator<=( const Date &cmp ) const;
		bool	operator==( const Date &cmp ) const;

		/*		PUBLIC MEMBER FUNCTION		*/

		bool	getError( void ) const;
};

#endif