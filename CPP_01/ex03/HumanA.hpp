/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:28:05 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/25 17:01:16 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
 #define WEAPON_HPP
# include "Weapon.hpp"
#endif

class   HumanA
{
    public:

        HumanA( std::string name, Weapon test );
        void    setWeapon( Weapon weapon );
        void    attack( void );

    private:

        Weapon  *weapon;
        std::string name;
};