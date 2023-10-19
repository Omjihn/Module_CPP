/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:27:56 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/19 17:53:45 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class   Cat : public Animal
{
    public:

        Cat( void );
        ~Cat();

        const std::string   getType( void );
        virtual void    makeSound( void );

    protected:

        std::string   type;
};