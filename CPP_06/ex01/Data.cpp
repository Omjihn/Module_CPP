/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:56:13 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/03 16:14:13 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void )
{
	std::cout << "[Data] Default constructor called" << std::endl;
}

Data::Data( Data &val ) : SecretString(val.getString())
{
	std::cout << "[Data] copy constructor called" << std::endl;
}

Data::Data( std::string input_string )
{
	std::cout << "[Data] String constructor called" << std::endl;
	this->SecretString = input_string;
}

Data::~Data()
{
	std::cout << "[Data] Destructor called" << std::endl;
}

Data & Data::operator=( Data &val )
{
	this->SecretString = val.getString();
	return (*this);
}

std::string	&Data::getString( void )
{
	return (this->SecretString);
}