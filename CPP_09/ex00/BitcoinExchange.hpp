/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:58:25 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/23 09:42:51 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>
# include <cctype>
# include <fstream>
# include <cstdlib>
# include <utility>
# include <iostream>
# include <functional>

# include "Date.hpp"

/*		ERROR MESSAGES		*/

# define ERR_HEADER "Error: File header must follow this format :\nname1[any separators combination]name2\nAll posible separators : \" |,;\""
# define ERR_FILE "Error: could not open file."

/*		DATA BASE NAME		*/

# define DB_NAME "data.csv"

/*		INPUT SEP		*/

# define INPUT_SEP " | "

class BitcoinExchange
{
	private:

		/*		PRIVATE MEMBERS VARIABLES		*/

		std::map<Date *, float>	_data;
		std::string				_sep;
		bool					_error;

		/*		PRIVATE MEMBERS FUNCTIONS		*/

		bool	isSep( char &c );
		bool	getSeparator( std::string &line );
		void	getAllLines( std::ifstream &file);
		void	parseFile( const char *file_name );
		void	searchDB( std::string &line );
		void	getClosest( Date &input_date, float &input_value );
		void	displayResult( float &input_value, float &price );
		

	public:

		/*		CONSTRUCTORS/DESTRUCTOR		*/

		BitcoinExchange( void );
		BitcoinExchange( BitcoinExchange &val );
		~BitcoinExchange();

		/*		OPERATOR OVERLOADING		*/

		BitcoinExchange	&operator=( BitcoinExchange &cpy );

		/*		PUBLIC MEMBERS FUNCTIONS		*/

		bool	error( void );
		void	readInput( char *av );
};

#endif