/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:14:40 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/30 14:09:05 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Harl
{

    public:

        void    complain( std::string level );
        void    test(void){std::cout << "test\n";};

    private:

        typedef void(Harl::*func_array)();
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
};