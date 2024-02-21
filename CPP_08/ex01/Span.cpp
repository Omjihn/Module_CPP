/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:36:37 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/21 17:46:19 by gbricot          ###   ########.fr       */
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

Span::Span( Span &val ) : Array(val.Array), index(val.index)
{
	std::cout << "[Span] Copy constructor called" << std::endl;
}

Span::~Span()
{
	std::cout << "[Span] Destructor called" << std::endl;
}

/*		OPERATOR OVERLOADING		*/

Span	&Span::operator=( Span &val )
{
	std::cout << "[Span] Copy assignment operator called" << std::endl;
	this->Array.resize(val.Array.size());
	for (unsigned int i = 0; i < val.Array.size(); i++)
		this->Array.at(i) = val.Array.at(i);
	this->index = val.index;
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
		std::cout << Array.at(i) << "\n";
	if (index < Array.size())
		std::cout << (Array.size() - index) << " spaces left" << std::endl;
	else
		std::cout << "The Span is full" << std::endl;
	
}

/*		EXCEPTION FUNCTION		*/

const char *Span::NoMoreSpaceLeft::what( void ) const throw()
{
	return ("No more space left");
}