/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:28:18 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/27 21:08:09 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
    this->type = type;
}

void    Weapon::setType( std::string type )
{
    this->type = type;
}

const std::string   Weapon::getType( void )
{
    if (!this->type.length())
        return ("fists");
    return(this->type);
}