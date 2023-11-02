/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:31:50 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/02 12:06:42 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
 #define IMATERIASOURCE_HPP

# include <iostream>

class   AMateria;

class IMateriaSource
{
    public:
    
        virtual ~IMateriaSource() {};
        virtual void learnMateria( AMateria *new_mat ) = 0;
        virtual AMateria* createMateria( std::string const &type ) = 0;
};

#endif