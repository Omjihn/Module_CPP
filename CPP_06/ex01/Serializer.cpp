/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:59:01 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/03 16:39:56 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "[Serializer] Default constructor called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "[Serializer] Destructor called" << std::endl;
}

uintptr_t	Serializer::serialize( Data *ptr )
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize( uintptr_t raw )
{
	return (reinterpret_cast<Data*>(raw));
}