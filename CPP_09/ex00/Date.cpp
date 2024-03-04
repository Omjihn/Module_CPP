/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:48:31 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/04 12:32:45 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Date.hpp"

Date::Date( void )
{
	_year = 1970;
	_month = 1;
	_day = 1;
}

Date::Date( std::string &str )
{
	std::istringstream iss(str);
	char	delimiter;
	int		tempMonth, tempDay;

	if (!(iss >> _year >> delimiter >> tempMonth >> delimiter >> tempDay))
	{
		std::cerr << "Error: Invalid date format" << std::endl;
		return ;
	}

	_month = static_cast< unsigned char >(tempMonth);
	_day = static_cast< unsigned char >(tempDay);

	if (_month > 12 || _day > 31)
	{
		std::cerr << "Error: Incorrect date value :\n\t" << str << std::endl;
	}

	std::cout << "Year :" << _year << "\nMonth :" << static_cast<int>(_month) << "\nDay :" << static_cast<int>(_day) << std::endl;
}

Date::Date( Date &val )
{
	_year = val._year;
	_month = val._month;
	_day = val._day;
}

Date::~Date( )
{
	
}