/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:40:23 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/04 12:15:24 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DATE_HPP
# define DATE_HPP

# include <iostream>
# include <sstream>

class Date
{
	private:

		unsigned int	_year;
		unsigned char	_month;
		unsigned char	_day;

	public:

		Date( void );
		Date( std::string &str );
		Date( Date &val );
		~Date( );
};

#endif