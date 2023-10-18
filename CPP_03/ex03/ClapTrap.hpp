/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:41:54 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/18 18:25:29 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CLAP_TRAP
# define CLAP_TRAP

class   ClapTrap
{
    public:

        ClapTrap( void );
        ClapTrap( const std::string input_name );
        ~ClapTrap();

        void  attack( const std::string &target );
        void  takeDamage( unsigned int amount );
        void  beRepaired( unsigned int amount );

        const std::string ft_get_name( void );

        unsigned int  ft_get_hit_point( void );
        unsigned int  ft_get_energy_point( void );
        unsigned int  ft_get_attack_dmg( void );

        void  ft_set_hit_point( unsigned int nb );
        void  ft_set_energy_point( unsigned int nb );
        void  ft_set_attack_dmg( unsigned int nb );

    private:

        const std::string   name;
        unsigned int    hit_point;
        unsigned int    energy_point;
        unsigned int    attack_dmg;
};

#endif