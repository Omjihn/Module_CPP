/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:37:38 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/02 11:26:40 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
    std::cout << "[AMateria] Default constructor called" << std::endl;
}

AMateria::AMateria( std::string const &input_type ) : type(input_type)
{
    std::cout << "[AMateria] String constructor called" << std::endl;
}

AMateria::~AMateria( void )
{
    std::cout << "[AMateria] Destructor called" << std::endl;
}

const std::string   &AMateria::getType( void ) const
{
    return (this->type);
}

void    AMateria::use( ICharacter &target )
{
    std::cout << "* Some weird shit happend to " << target.getName() << ", but we don't know what *" << std::endl;
}