/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:09:08 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/27 17:13:08 by gbricot          ###   ########.fr       */
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
    delete j;//should not create a leak
    delete i;
    delete k;
    return 0;
}