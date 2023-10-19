/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:27:39 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/19 17:53:44 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class   Dog : public Animal
{
    public:

        Dog( void );
        ~Dog();

        const std::string   getType( void );
        virtual void    makeSound( void );

    protected:

        std::string   type;
};