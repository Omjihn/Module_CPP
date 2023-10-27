/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:18:46 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/27 14:34:59 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ANIMAL_HPP
 #define ANIMAL_HPP

class   Animal
{
    public:
        
        Animal( void );
        Animal( const std::string animal_type );
        virtual ~Animal();

        void    makeSound( void ) const;
        const   std::string getType( void ) const ;

    protected:

        const std::string type;
};

#endif