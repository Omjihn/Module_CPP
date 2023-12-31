/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:28:12 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/27 20:32:33 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
 #define WEAPON_HPP
# include "Weapon.hpp"
#endif

class   HumanB
{
    public:

        HumanB( std::string name );
        void    setWeapon(Weapon &weapon);
        void    attack( void );

    private:

        std::string name;
        Weapon  *weapon;
};