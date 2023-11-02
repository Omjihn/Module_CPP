/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:47:22 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/02 12:09:22 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource
{
    public:

        MateriaSource( void );
        ~MateriaSource();

        void    learnMateria( AMateria *new_mat );
        AMateria*   createMateria( std::string const &type );

    protected:

        AMateria    *learned[4];
};

#endif