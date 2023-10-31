/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:54:06 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/31 15:33:46 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
    std::cout << "[MateriaSource] Default constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4 && this->learned[i] ; i++)
        delete this->
    std::cout << "[MateriaSource] Destructor called" << std::endl;
}

void    MateriaSource::learnMateria( AMateria *new_mat )
{
    if (learned[3])
        std::cout << "Already 4 materias has been learned." << std::endl;
    else
    {
        int i = 0;
        while (learned[i])
            i++;
        learned[i] = new_mat;
    }
}

AMateria    *MateriaSource::createMateria( const std::string &type )
{
    int i = 0;
    while (i < 3 && this->learned[i]->getName().compare(type))
        i++;
    if (i > 3)
        std::cout << "Reference to this materia name not found." << std::endl;
    else
        return (this->learned[i]->clone());
    return (nullptr);
}