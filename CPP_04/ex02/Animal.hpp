/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:18:46 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/29 17:21:26 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ANIMAL_HPP
 #define ANIMAL_HPP

class   Animal
{
    public:
        
        virtual ~Animal();

        virtual void    makeSound( void ) const = 0;
        const   std::string getType( void ) const ;

    protected:

        Animal( void );
        Animal( const std::string animal_type );

        const std::string type;
};

#endif