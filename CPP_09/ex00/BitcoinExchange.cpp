/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:58:27 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/04 15:54:27 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( std::string av )
{
	_error = 0;
	parseFile( av );
}

BitcoinExchange::BitcoinExchange( BitcoinExchange &val )
{
	_data = val._data;
	_sep = val._sep;
	_error = val._error;
}

BitcoinExchange::~BitcoinExchange()
{
	for (std::deque<std::pair< Date *, float > >::iterator it = _data.begin(); it != _data.end(); it++)
	{
		delete it->first;
	}
}

/*		PRIVATE MEMBERS FUNCTIONS		*/

void	BitcoinExchange::parseFile( std::string &av )
{
	std::ifstream					file;

	file.open(av.c_str(), std::ifstream::in);
	if (!file.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		_error = 1;
		return ;
	}
	std::string	line;
	std::getline(file, line);
	if (!getSeparator( line ))
	{
		std::cerr << ERR_HEADER << std::endl;
		_error = 1;
		return ;
	}
	std::cout << "[Debug] _sep : \"" << _sep << "\"" << std::endl;
	while (std::getline(file, line))
	{
		size_t pos = line.find(_sep);

		if (pos != std::string::npos)
		{
			std::string dateStr = line.substr(0, pos);
			std::string valueStr = line.substr(pos + _sep.length());

			Date* datePtr = new Date(dateStr);

			std::istringstream iss(valueStr);
			float value;

			if (iss >> value)
			{
				_data.push_back(std::make_pair(datePtr, value));
				std::cout << "Date: " << dateStr << ", Value: " << value << std::endl;
			}
			else
				std::cerr << "Error: No value found in line: " << line << std::endl;
		}
		else
			std::cerr << "Error: Separator not found in line: " << line << std::endl;
	}
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

/*		PUBLIC MEMBER FUNCTION		*/

bool	BitcoinExchange::error( void )
{
	if (_error)
		return (true);
	return (false);
}