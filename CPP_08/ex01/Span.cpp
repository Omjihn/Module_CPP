/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:36:37 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/18 14:57:00 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*		CONSTRUCTORS/DESTRUCTOR		*/

Span::Span( void ) : Array(0), index(0)
{
	std::cout << "[Span] Default constructor called" << std::endl;
}

Span::Span( unsigned int n ) : Array(n), index(0)
{
	std::cout << "[Span] Unsigned int constructor called" << std::endl;
}

Span::Span( const Span &val ) : Array(val.Array), index(val.index)
{
	std::cout << "[Span] Copy constructor called" << std::endl;
}

Span::~Span()
{
	std::cout << "[Span] Destructor called" << std::endl;
}

/*		OPERATOR OVERLOADING		*/

Span	&Span::operator=( const Span &val )
{
	std::cout << "[Span] Copy assignment operator called" << std::endl;
	if (this != &val)
	{
		this->Array = val.Array;
		this->index = val.index;
	}
	return (*this);
}

/*		MEMBER FUNCTION		*/

void	Span::addNumber( int nb )
{
	if (this->index >= Array.size())
		throw	Span::NoMoreSpaceLeft();
	Array.at(this->index++) = nb;
}

void	Span::printContent( void )
{
	for (unsigned int i = 0; i < index; i++)
		std::cout << "Span[" << i << "] = " << Array.at(i) << "\n";
	if (index < Array.size())
		std::cout << (Array.size() - index) << " space(s) left" << std::endl;
	else
		std::cout << "The Span is full" << std::endl;
	
}

void	Span::addRandNumbers( void )
{
	std::srand(getpid());
	
	for (unsigned int i = 0; i < Array.size(); i++)
		Array.at(i) = std::rand();
	index = Array.size();
}

unsigned int	Span::shortestSpan( void )
{
	if (index <= 1)
		throw Span::NotEnoughNumbers();
	std::vector<int>	cpy = Array;

	std::sort(cpy.begin(), cpy.begin() + this->index);

	int	shortest_span = INT_MAX;
	std::vector<int>::iterator	it = cpy.begin();
	for (unsigned int i = 0; (i + 1) < this->index; i++)
	{
		if (shortest_span > (*(it + 1) - *it))
			shortest_span = (*(it + 1) - *it);
		it++;
	}
	return (shortest_span);
}

unsigned int	Span::longestSpan( void )
{
	if (index <= 1)
		throw Span::NotEnoughNumbers();
	int	min = *std::min_element(Array.begin(), Array.begin() + index);
	int	max = *std::max_element(Array.begin(), Array.begin() + index);
	
	return (max - min);
}

/*		EXCEPTIONS FUNCTIONS		*/

const char *Span::NoMoreSpaceLeft::what( void ) const throw()
{
	return ("No more space left");
}

const char *Span::NotEnoughNumbers::what( void ) const throw()
{
	return ("Not enough numbers");
}