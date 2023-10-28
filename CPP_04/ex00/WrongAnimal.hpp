/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:30:16 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/28 09:19:09 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WRONGANIMAL_HPP
 #define WRONGANIMAL_HPP

class   WrongAnimal
{
    public:
        
        WrongAnimal( void );
        WrongAnimal( const std::string animal_type );
        virtual ~WrongAnimal();

        virtual void    makeSound( void ) const ;
        const   std::string getType( void ) const ;

    protected:

        const std::string type;
};

#endif