/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:41:54 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/16 15:01:30 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   ClapTrap
{
    public:

          ClapTrap( void );
          ClapTrap( const std::string input_name );
          ~ClapTrap();

          void  attack( const std::string &target );
          void  takeDamage( unsigned int amount );
          void  beRepaired( unsigned int amount );

    private:

        const std::string   name;
        unsigned int    hit_point;
        unsigned int    energy_point;
        unsigned int    attack_dmg;
};
