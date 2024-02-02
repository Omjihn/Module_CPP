/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:04:48 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/02 16:01:40 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <climits>
# include <cmath>
# include <iomanip>

class	ScalarConverter
{
	public:

		ScalarConverter( void );
		ScalarConverter( const ScalarConverter &cpy );
		~ScalarConverter();

		static void	convert( std::string str );

	private:

		static void	StringToChar( const std::string& str );
		static void	StringToInt( const std::string& str );
		static void	StringToFloat( const std::string& str );
		static void	StringToDouble( const std::string& str);
};

#endif