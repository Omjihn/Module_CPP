/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:48:31 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/06 10:33:01 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Date.hpp"

Date::Date( void )
{
	_year = 1970;
	_month = 1;
	_day = 1;
	_error = false;
}

Date::Date( std::string &str ) : _error (false)
{
	std::istringstream	iss(str);
	char				delimiter;
	int					tempMonth, tempDay;

	if (!(iss >> _year >> delimiter >> tempMonth >> delimiter >> tempDay) \
			|| iss.peek() != EOF)
	{
		std::cerr << "Error: bad input => " << str << std::endl;
		_error = true;
		return ;
	}
	if (!tempMonth || !tempDay || tempMonth > 12 || tempDay > 31) /* NO ENTIERLY CORRECT BUT IT FIT THE SUBJECT */
	{
		std::cerr << "Error: bad input => " << str << std::endl;
		_error = true;
	}
	_month = static_cast< unsigned char >(tempMonth);
	_day = static_cast< unsigned char >(tempDay);
}

Date::Date( Date &val )
{
	_year = val._year;
	_month = val._month;
	_day = val._day;
	_error = val._error;
}

Date::~Date( )
{
	
}

Date	&Date::operator=( Date &cpy )
{
	_year = cpy._year;
	_month = cpy._month;
	_day = cpy._day;
	_error = cpy._error;
	return (*this);
}

bool	Date::operator>=( const Date &cmp ) const
{
	if (_year > cmp._year)
		return (true);
	else if (_year == cmp._year && _month > cmp._month)
		return (true);
	else if (_year == cmp._year && _month == cmp._month && _day >= cmp._day)
		return (true);
	else
		return (false);
}

bool	Date::operator<=( const Date &cmp ) const
{
	if (_year < cmp._year)
		return (true);
	else if (_year == cmp._year && _month < cmp._month)
		return (true);
	else if (_year == cmp._year && _month == cmp._month && _day <= cmp._day)
		return (true);
	else
		return (false);
}

bool	Date::operator==( const Date &cmp ) const
{
	if (_year == cmp._year && _month == cmp._month && _day == cmp._day)
		return (true);
	return (false);
}

bool	Date::getError( void ) const
{
	return (_error);
}