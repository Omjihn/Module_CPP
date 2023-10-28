/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:17:40 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/28 14:04:37 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* k = new WrongCat();
    const WrongAnimal* l = new WrongAnimal();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    k->makeSound();
    l->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    delete k;
    delete l;
    return 0;
}