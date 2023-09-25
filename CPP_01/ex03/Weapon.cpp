/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:28:18 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/25 17:08:32 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{
    this->type = "";
}

Weapon::Weapon( std::string type )
{
    this->type = type;
}

std::string Weapon::GetType( void )
{
    return (type);
}

void    Weapon::setType( std::string type )
{
    this->type = type;
}