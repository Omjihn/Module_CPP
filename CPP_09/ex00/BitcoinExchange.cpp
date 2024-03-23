/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:58:27 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/23 09:46:54 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*		CONSTRUCTORS/DESTRUCTOR		*/

BitcoinExchange::BitcoinExchange( void )
{
	_error = 0;
	const char *file = "data.csv";
	parseFile( file );
}

BitcoinExchange::BitcoinExchange( BitcoinExchange &val )
{
	_data = val._data;
	_sep = val._sep;
	_error = val._error;
}

BitcoinExchange::~BitcoinExchange()
{
	for (std::map< Date *, float >::iterator it = _data.begin(); it != _data.end(); it++)
	{
		delete it->first;
	}
}

/*		PRIVATE MEMBERS FUNCTIONS		*/

void	BitcoinExchange::getAllLines( std::ifstream &file)
{
	std::string	line;
	float value;

	while (std::getline(file, line))
	{
		size_t pos = line.find(_sep);
		if (pos != std::string::npos)
		{
			std::string dateStr = line.substr(0, pos);
			std::string valueStr = line.substr(pos + _sep.length());
			Date* datePtr = new Date(dateStr);
			std::istringstream iss(valueStr);
			if (iss >> value)
				_data[datePtr] = value;
			else
				std::cerr << "Error: No value found in line: " << line << std::endl;
		}
		else
			std::cerr << "Error: Separator not found in line: " << line << std::endl;
	}
}

void	BitcoinExchange::parseFile( const char *file_name )
{
	std::ifstream	file;

	file.open(file_name, std::ifstream::in);
	if (!file.is_open())
	{
		std::cerr << "Error: Could not open the data base." << std::endl;
		_error = 1;
		return ;
	}
	std::string	line;
	std::getline(file, line);
	if (!getSeparator( line ))
	{
		std::cerr << ERR_HEADER << std::endl;
		_error = 1;
		file.close();
		return ;
	}
	getAllLines( file );
	file.close();
}

void	BitcoinExchange::displayResult( float &input_value, float &price )
{
	std::cout << input_value * price << std::endl;
}

void	BitcoinExchange::getClosest( Date &input_date, float &input_value )
{
	std::map< Date *, float >::iterator it = _data.begin();
	if (input_date == *it->first)
	{
		displayResult( input_value, it->second );
		return ;
	}
	else if (input_date <= *it->first)
	{
		std::cerr << "Error: no data at this date." << std::endl;
		return ;
	}
	while (it != _data.end())
	{
		if (input_date == *it->first)
		{
			displayResult( input_value, it->second );
			return ;
		}
		else if (input_date <= *it->first)
		{
			it--;
			displayResult( input_value, it->second );
			return ;
		}
		it++;
	}
	it--;
	displayResult( input_value, it->second );
}

void	BitcoinExchange::searchDB( std::string &line )
{
	float		input_value;
	size_t pos = line.find(" | ");

	if (pos != std::string::npos)
	{
		std::string dateStr = line.substr(0, pos);
		std::string valueStr = line.substr(pos + 3);
		Date	input_date(dateStr);
		if (input_date.getError())
			return ;
		std::istringstream iss(valueStr);
		if (iss >> input_value && (iss.peek() == EOF))
		{
			if (input_value > 1000)
			{
				std::cerr << "Error: too large a number." << std::endl;
				return ;
			}
			else if (input_value < 0)
			{
				std::cerr << "Error: not a positive number." << std::endl;
				return ;
			}
			std::cout << dateStr << " => " << input_value << " = ";
			getClosest( input_date, input_value );
		}
		else
			std::cerr << "Error: bad input => " << line << std::endl;
	}
	else
		std::cerr << "Error: bad input => " << line << std::endl;
}

bool	BitcoinExchange::isSep( char &c )
{
	static std::string	sep(" |,;");

	if (sep.find(c, 0) != std::string::npos)
		return  (true);
	return (false);
}

bool	BitcoinExchange::getSeparator( std::string &line )
{
	std::string::iterator	it = line.begin();

	while (it != line.end() && std::isprint(*it) && !isSep(*it))
	{
		it++;
	}
	if (it == line.end())
		return (false);
	while (it != line.end() && isSep(*it))
	{
		_sep.insert(_sep.end(), *it);
		it++;
	}
	if (it == line.end())
		return (false);
	while (it != line.end() && std::isprint(*it) && !isSep(*it))
	{
		it++;
	}
	if (it == line.end())
		return (true);
	return (false);
}

/*		OPERATOR OVERLOADING		*/

BitcoinExchange	&BitcoinExchange::operator=( BitcoinExchange &cpy)
{
	_data = cpy._data;
	_sep = cpy._sep;
	_error = cpy._error;
	return (*this);
}

/*		PUBLIC MEMBERS FUNCTIONS		*/

bool	BitcoinExchange::error( void )
{
	if (_error)
		return (true);
	return (false);
}

void	BitcoinExchange::readInput( char *av )
{
	std::ifstream	file(av, std::ifstream::in);
	std::string		line;

	if (!file.is_open())
	{
		std::cerr << ERR_FILE << std::endl;
		return ;
	}
	std::getline(file, line);
	if (line.find("date | value", 0))
	{
		std::cerr << "Error: Unexpected input header." << std::endl;
		file.close();
		return ;
	}
	while (std::getline(file, line))
		searchDB( line );
	file.close();
}
