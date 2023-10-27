/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:33:41 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/27 14:58:44 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
 #define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include "Brain.hpp"

class   WrongCat : public WrongAnimal
{
    public:

        WrongCat( void );
        ~WrongCat();

    private:

        Brain   *brain;
};

#endif