/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:27:39 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/27 14:35:34 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
 #define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class   Dog : public Animal
{
    public:

        Dog( void );
        virtual ~Dog();

    private:

        Brain   *brain;
};

#endif