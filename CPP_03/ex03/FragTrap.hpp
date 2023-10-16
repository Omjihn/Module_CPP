/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:09:24 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/16 17:36:45 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#ifndef FRAG_TRAP
# define FRAG_TRAP

class   FragTrap : public ClapTrap
{
    public:

        FragTrap( void );
        FragTrap( const std::string input_name );
        ~FragTrap();

        void    highFivesGuys( void );
};

#endif