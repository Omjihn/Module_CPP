/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:24:55 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/30 15:36:14 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define debug_msg "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
#define info_msg "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define warning_msg "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month."
#define error_msg "This is unacceptable! I want to speak to the manager now."

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