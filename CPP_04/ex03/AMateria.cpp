/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:37:38 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/29 17:39:27 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
    std::cout < "[AMateria] Default constructor called" << std::endl;
}

AMateria::AMateria( std::string const &type )
{
    std::cout < "[AMateria] String constructor called" << std::endl;
}