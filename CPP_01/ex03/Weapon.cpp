/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:28:18 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/27 17:26:07 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
    this->type = type;
}

std::string Weapon::GetType( void )
{
    //std::cout << this->type << std::endl;
    return (this->type);
}

void    Weapon::setType( std::string type )
{
    this->type = type;
    //std::cout << this->type << std::endl;
}