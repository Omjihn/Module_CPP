/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:09:08 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/29 17:30:26 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Dog* j = new Dog();
    const Cat* i = new Cat();
    //const Animal* l = new Animal(); // Not possible anymore !
    //const WrongAnimal* m = new WrongAnimal(); //Not possible anymore !
    const WrongAnimal* k = new WrongCat();
    i->makeSound();
    k->makeSound();
    delete i;
    delete k;
    j->makeSound();
    delete j;

    std::cout << std::endl << "-------------------------------------" << std::endl << std::endl;

    unsigned int    total = 10;
    Animal  *array[10];
    unsigned int n = 0;
    while (n < total)
    {
        if ((n % 2))
            array[n] = new Cat();
        else
            array[n] = new Dog();
        array[n++]->makeSound();
    }/*
    n = 0;
    while (n < total) // remplace Dogs by Cats, cause Cats are better meow
    {
        if (!array[n]->getType().compare("Dog"))
        {
            delete array[n];
            array[n] = new Cat();
        }
        array[n++]->makeSound();
    }*/
    n = 0;
    while (n < total)
        delete array[n++];
    return 0;
}