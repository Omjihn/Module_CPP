/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:40:39 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/03 17:16:42 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : name("Unnamed person")
{
    std::cout << "[Character] Default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

Character::Character( const std::string input_name ) : name(input_name)
{
    std::cout << "[Character] String constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

Character::Character( const Character &copy ) : name(copy.getName())
{
    std::cout << "[Character] Copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (copy.materia[i])
            this->materia[i] = copy.materia[i]->clone();
        else
            this->materia[i] = NULL;
    }
}



Character::~Character()
{
    std::cout << "[Character] Destructor called" << std::endl;
}

Character   &Character::operator=( const Character &val )
{
    std::cout << "[Character] Copy assignment operator" << std::endl;
    for (int i = 0; i < 4; i++)
        this->materia[i] = val.materia[i];
    return (*this);
}

const std::string   &Character::getName( void ) const
{
    return (this->name);
}

void    Character::equip( AMateria *m )
{
    int i = 0;
    while (i < 4 && this->materia[i])
            i++;
    if (i >= 4)
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
        this->materia[idx] = NULL;
}

void    Character::use( int idx, ICharacter &target )
{
    if (idx < 0 || idx > 3)
        std::cout << "Wrong index please enter a number from 0 to 3." << std::endl;
    else if (!this->materia[idx])
        std::cout << "No materia at this index." << std::endl;
    else
        this->materia[idx]->use(target);
}