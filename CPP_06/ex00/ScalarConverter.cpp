/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:14:44 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/02 16:02:31 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertionTypes.h"

ScalarConverter::ScalarConverter( void )
{
	//std::cout << "[ScalarConverter] Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter( const ScalarConverter &cpy )
{
	//std::cout << "[ScalarConverter] Copy constructor called" << std::endl;
	*this = cpy; 
}

ScalarConverter::~ScalarConverter()
{
	//std::cout << "[ScalarConverter] Destructor called" << std::endl;
}

void	ScalarConverter::StringToChar( const std::string& str )
{
	std::istringstream iss(str);
	int	num;

	if ((iss >> num) && (num <= CHAR_MAX && num >= CHAR_MIN))
	{
		if (!std::isprint(num))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "\'" << static_cast<char>(num) << "\'" << std::endl;
	} 
	else
		std::cout << "impossible" << std::endl;
}

void	ScalarConverter::StringToInt( const std::string& str )
{
	std::istringstream	iss(str);
	int	num;

	if (iss >> num)
		std::cout << num << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	ScalarConverter::StringToFloat( const std::string& str )
{
	std::istringstream iss(str);
	float num;

	if (iss >> num)
		std::cout << std::fixed << std::setprecision(1) << num;
	else
		std::cout << "nan";
	std::cout << "f" << std::endl;
}

void	ScalarConverter::StringToDouble( const std::string& str )
{
	std::istringstream iss(str);
	double num;

	if (iss >> num)
		std::cout << num << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << "nan" << std::endl;
}

void	ScalarConverter::convert( std::string input )
{
	std::cout << "char : ";
	ScalarConverter::StringToChar(input);
	std::cout << "int : ";
	ScalarConverter::StringToInt(input);
	std::cout << "float : ";
	ScalarConverter::StringToFloat(input);
	std::cout << "double : ";
	ScalarConverter::StringToDouble(input);
}