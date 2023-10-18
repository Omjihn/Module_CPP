/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:49:05 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/18 18:54:55 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class   DiamondTrap : public FragTrap, public ScavTrap
{
    public:

        DiamondTrap( void );
        DiamondTrap( std::string input_name );
        ~DiamondTrap();

        void    whoAmI( void );

        std::string   ft_get_name_diamond( void );
        
    private:

        const std::string   name;
};