/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:54:06 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/02 15:27:09 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
    std::cout << "[MateriaSource] Default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->learned[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    std::cout << "[MateriaSource] Destructor called" << std::endl;
    for (int i = 0; i < 4 && this->learned[i]; i++)
        delete this->learned[i];
}

void    MateriaSource::learnMateria( AMateria *new_mat )
{
    int i = 0;
    while (i < 4 && learned[i])
        i++;
    if (i == 4)
        std::cout << "Already 4 materias have been learned." << std::endl;
    else
        this->learned[i] = new_mat;
}

AMateria    *MateriaSource::createMateria( const std::string &type )
{
    int i = 0;
    while (i < 4 && this->learned[i])
    {
        if (!this->learned[i]->getType().compare(type))
            break ;
        else
            i++;
    }
    if (i == 4 || !this->learned[i])
        std::cout << "Reference to this materia name not found." << std::endl;
    else
        return (this->learned[i]);
    return (NULL);
}