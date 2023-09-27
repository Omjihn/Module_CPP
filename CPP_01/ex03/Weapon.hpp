/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:28:16 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/27 19:32:44 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Weapon
{
    public:

        Weapon( std::string type );
        const std::string GetType( void );
        void    setType( std::string type );

    private:

        std::string type;
};