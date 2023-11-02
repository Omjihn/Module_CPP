/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:51:10 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/02 12:07:14 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class   Cure : public AMateria
{
    public:

        Cure( void );
        ~Cure();

        AMateria    *clone( void ) const;
        void    use( ICharacter &target );
};

#endif