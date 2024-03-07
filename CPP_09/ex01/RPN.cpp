/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:47:15 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/07 17:07:13 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/*		CONSTRUCTORS/DESTRUCTOR		*/

RPN::RPN( std::string str ) : operation(str)
{
	
}

RPN::RPN( RPN &val ) : operation(val.operation)
{
	this->numbers = val.numbers;
}

RPN::~RPN()
{
	
}

/*		OPERATOR OVERLOADING		*/

RPN	&RPN::operator=( RPN &cpy )
{
	this->operation = cpy.operation;
	this->numbers = cpy.numbers;
	return (*this);
}

/*		PRIVATE MEMBERS FUNCTIONS		*/

bool	RPN::is_operator( std::string &str ) const
{
	if (str == "-" || str == "+" || str == "*" || str == "/")
		return (1);
	return (0);
}

bool	RPN::is_number( std::string &str ) const
{
	std::string::iterator	it;
	for(it = str.begin(); it != str.end(); it++)
	{
		if (!std::isdigit(*it))
			return (false);
	}
	return (true);
}

bool	RPN::execOperator( char op )
{
	if (numbers.size() < 2)
		{
			std::cerr << "Error: Wrong operation can't have operator without having at least 2 numbers" << std::endl;
			return (false);
		}
	int nb1 = numbers.top();
	numbers.pop();
	int nb2 = numbers.top();
	numbers.pop();
	switch (op)
	{
		case '+':
			numbers.push(nb2 + nb1);
			break;
		case '-':
			numbers.push(nb2 - nb1);
			break;
		case '*':
			numbers.push(nb2 * nb1);
			break;
		case '/':
			if (!nb1)
			{
				std::cerr << "Error: Can't divide by 0" << std::endl;
				return (false);
			}
			numbers.push(nb2 / nb1);
	}
	return (true);
}

int	RPN::stringToInt( const std::string &str )
{
	std::istringstream	iss(str);
	int					res;
	
	iss >> res;
	return (res);
}


bool	RPN::doTheMaths( void )
{
	std::istringstream	iss(operation);
	std::string			buffer;

	while (iss >> buffer)
	{
		if (is_number(buffer))
			numbers.push(stringToInt(buffer));
		else if (is_operator(buffer))
		{
			if (!execOperator(buffer.at(0)))
				return (false);
		}
		else
		{
			std::cerr << "Error: Wrong input: " << buffer << std::endl;
			return (false);
		}
	}
	if (numbers.size() != 1)
	{
		std::cerr << "Error: Invalid expression" << std::endl;
		return (false);
	}
	std::cout << numbers.top() << std::endl;
	return (true);
}