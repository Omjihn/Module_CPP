/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:40:39 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/31 15:35:39 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : name("Unnamed person")
{
    std::cout << "[Character] Default constructor called" << std::endl;
}

Character::Character( const std::string input_name ) : name(input_name)
{
    std::cout << "[Character] String constructor called" << std::endl;
}

Character::~Character()
{
    std::cout << "[Character] Destructor called" << std::endl;
}

const std::string   &Character::getName( void ) const
{
    return (this->name);
}

void    Character::equip( AMateria *m )
{
    int i = 0;
    while (i <= 3 && this->materia[i])
        i++;
    if (i > 3)
        std::cout << "No more slot available, please unequip a materia before trying to add a new one." << std::endl;
    else
        this->materia[i] = m;
}

void    Character::unequip( int idx )
{
    if (idx < 0 || idx > 3)
        std::cout << "Wrong index please enter a number from 0 to 3." << std::endl;
    else if (!this->materia[idx])
        std::cout << "No materia at this index." << std::endl;
    else
        this->materia[idx] = nullptr;
}

void    Character::use( int idx, ICharacter &target )
{
    if (idx < 0 || idx > 3)
        std::cout << "Wrong index please enter a number from 0 to 3." << std::endl;
    else if (!this->materia[idx])
        std::cout << "No materia at this index." << std::endl;
    else
        this->materia[idx]->use();
}