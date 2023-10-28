/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:27:56 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/28 09:24:02 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
 #define CAT_HPP

# include "Animal.hpp"

class   Cat : virtual public Animal
{
    public:

        Cat( void );
        ~Cat();

        void    makeSound( void ) const;
};

#endif