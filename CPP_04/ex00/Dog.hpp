/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:27:39 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/28 09:23:58 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
 #define DOG_HPP

# include "Animal.hpp"

class   Dog : virtual public Animal
{
    public:

        Dog( void );
        ~Dog();

        void    makeSound( void ) const;
};

#endif