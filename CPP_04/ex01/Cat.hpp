/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:27:56 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/27 14:58:41 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
 #define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class   Cat : public Animal
{
    public:

        Cat( void );
        ~Cat();

    private:

        Brain   *brain;
};

#endif