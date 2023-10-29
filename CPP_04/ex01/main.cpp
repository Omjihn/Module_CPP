/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:09:08 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/29 16:53:39 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    unsigned int    total = 10;
    Animal  *array[10];
    unsigned int i = 0;
    while (i < total)
    {
        if ((i % 2))
            array[i] = new Cat();
        else
            array[i] = new Dog();
        array[i++]->makeSound();
    } /*
    i = 0;
    while (i < total) // remplace Dogs by Cats, cause Cats are better meow
    {
        if (!array[i]->getType().compare("Dog"))
        {
            delete array[i];
            array[i] = new Cat();
        }
        array[i++]->makeSound();
    }*/
    i = 0;
    while (i < total)
        delete array[i++];
    return 0;
}