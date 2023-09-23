/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:23:09 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/23 15:23:11 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Zombie
{
    public:

        Zombie( std::string );
        ~Zombie();

        void    announce( void );

    private:

        std::string name;
};

#ifndef ZOMBIE
 #define ZOMBIE

 Zombie *zombieHorde( int N, std::string name );

#endif
