/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:28:16 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/27 20:34:25 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Weapon
{
    public:

        Weapon( std::string type );
        void    setType( std::string type );
        const std::string   getType( void );
        
    private:

        std::string type;
};