/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:09:24 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/16 14:43:09 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
{
    public:

        FragTrap( void );
        FragTrap( const std::string name );
        ~FragTrap();

        void    highFivesGuys( void );
};