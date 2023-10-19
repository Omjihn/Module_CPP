/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:18:46 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/19 17:55:53 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ANIMAL
 #define ANIMAL

class   Animal
{
    public:
        
        Animal( void );
        Animal( const std::string animal_type );
        ~Animal();

        void    makeSound( void );
};

#endif