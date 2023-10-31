/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:47:02 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/31 15:56:15 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class   Character : public ICharacter
{
    public:

        Character( void );
        Character( const std::string input_name );
        ~Character();

    protected:

        const std::string   name;
        AMateria    *materia[4];
};

#endif