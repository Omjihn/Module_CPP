/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:22:24 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/02 14:27:21 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

# include "ICharacter.hpp"

class AMateria
{
    public:
    
        virtual ~AMateria();
        const std::string &getType( void ) const; //Returns the materia type
        virtual AMateria* clone( void ) const = 0;
        virtual void use(ICharacter &target);

        AMateria    *operator=( AMateria &mat );

    protected:

        AMateria( void );
        AMateria(std::string const &input_type);
        const std::string   type;
};

#endif