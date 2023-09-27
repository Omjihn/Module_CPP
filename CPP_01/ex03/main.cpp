/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:12:46 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/27 21:11:21 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

#ifndef WEAPON_HPP
 #define WEAPON_HPP
# include "Weapon.hpp"
#endif

int main(void)
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    std::cout << "-------------------------------------------------" << std::endl;
    Weapon club_2 = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club_2);
    jim.attack();
    club_2.setType("some other type of club");
    jim.attack();
}