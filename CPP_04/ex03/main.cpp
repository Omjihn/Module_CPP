/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:20:07 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/02 15:28:07 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define WHITE "\033[0m"
#define HIGHLIGHT "\033[30;43m"

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"

//  Subject main


int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}

// Custom main

/*
int main()
{
    std::cout << WHITE;
    IMateriaSource* SheikaSlate = new MateriaSource();
    SheikaSlate->learnMateria(new Ice());
    SheikaSlate->learnMateria(new Cure());

    ICharacter* Ganon = new Character("Ganon");
    ICharacter* Link = new Character("Link");

    AMateria* tmp;
    tmp = SheikaSlate->createMateria("ice");
    Ganon->equip(tmp);
    tmp = SheikaSlate->createMateria("cure");
    Ganon->equip(tmp);
    Ganon->equip(tmp);
    Ganon->equip(tmp);
    std::cout << HIGHLIGHT << '\r';
    Ganon->equip(tmp);      // He already have 4 materias 
    std::cout << WHITE;
    Ganon->use(2, *Link);
    Ganon->unequip(2);
    std::cout << HIGHLIGHT;
    Ganon->use(2, *Link);   // Trying to use an empty slot
    Ganon->unequip(2);      // Trying to unequip an empty slot
    std::cout << WHITE;
    
    tmp = SheikaSlate->createMateria("ice");
    Ganon->equip(tmp);
    Ganon->use(2, *Link);
    std::cout << HIGHLIGHT;
    Ganon->unequip(4);      // Trying to unequip wrong index
    std::cout << WHITE;

    Link->equip(tmp);
    Link->use(0, *Ganon);
    std::cout << HIGHLIGHT;
    tmp = SheikaSlate->createMateria("test");
    std::cout << WHITE;

    delete Ganon;
    delete Link;
    delete SheikaSlate;

    return 0;
}*/