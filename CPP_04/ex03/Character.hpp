/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:47:02 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/03 17:01:40 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class   Character : public ICharacter
{
    public:

        Character( void );
        Character( const std::string input_name );
        Character( const Character &copy );
        ~Character();

        const   std::string &getName() const;
        void    equip(AMateria *m);
        void    unequip(int idx);
        void    use(int idx, ICharacter &target);

        Character   &operator=( const Character &val );
        

    protected:

        const std::string   name;
        AMateria    *materia[4];
};

#endif