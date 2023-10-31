/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:22:24 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/31 15:58:33 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
 #define AMATERIA_HPP

# include <iostream>
# include "Character.hpp"

class AMateria
{
    public:
    
        AMateria( void );
        AMateria(std::string const &type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    protected:

        virtual ~AMateria();

        const std::string   type;
};

#endif