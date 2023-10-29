/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:30:16 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/29 17:31:03 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WRONGANIMAL_HPP
 #define WRONGANIMAL_HPP

class   WrongAnimal
{
    public:
        
        virtual ~WrongAnimal();

        virtual void    makeSound( void ) const = 0;
        const   std::string getType( void ) const ;

    protected:

        WrongAnimal( void );
        WrongAnimal( const std::string animal_type );

        const std::string type;
};

#endif