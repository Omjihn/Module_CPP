/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:58:25 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/04 11:40:15 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>
# include <cctype>
# include <fstream>
# include <cstdlib>
# include <iostream>

# include "Date.hpp"

/*		ERROR MESSAGES		*/

# define ERR_HEADER "Error: File header must follow this format :\nname1[any separators combination]name2\nAll posible separators : \" |,;\""
# define ERR_ARG "Error: Wrong number of argument, Usage: ./btc [file.csv]"

class BitcoinExchange
{
	private:

		/*		PRIVATE MEMBERS VARIABLES		*/

		std::map< std::string, float >	_data;
		std::string						_sep;
		bool							_error;

		/*		PRIVATE MEMBERS FUNCTIONS		*/

		bool	isSep( char &c );
		bool	getSeparator( std::string &line );
		void	parseFile( std::string &av );
		

	public:

		/*		CONSTRUCTOR/DESTRUCTOR		*/

		BitcoinExchange( std::string av );
		BitcoinExchange( BitcoinExchange &val );
		~BitcoinExchange();

		/*		PUBLIC MEMBER FUNCTION		*/

		bool	error( void );
};

#endif