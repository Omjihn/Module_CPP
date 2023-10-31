/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:50:07 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/31 15:54:46 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "Character.hpp"

class   Ice : public AMateria
{
    public:

        Ice( void );
        ~Ice();

        AMateria    *clone( void ) const;
        void    use( ICharacter &target );
};

#endif