/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:24:53 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/30 16:17:35 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain( std::string level )
{
    Harl::func_array func_ptr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    (void) func_ptr;
    int i = 0;
    while (i < 4)
    {
        if (!tab[i].compare(level))
            break ;
        i++;
    }
    switch (i)
    {
        case 0:
            (this->*func_ptr[i++])();
            (this->*func_ptr[i++])();
            (this->*func_ptr[i++])();
            (this->*func_ptr[i++])();
            break ;
        case 1:
            (this->*func_ptr[i++])();
            (this->*func_ptr[i++])();
            (this->*func_ptr[i++])();
            break ;
        case 2:
            (this->*func_ptr[i++])();
            (this->*func_ptr[i++])();
            break ;
        case 3:
            (this->*func_ptr[i++])();
            break ;
        case 4:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;  
            break ;
    }
}
    

void    Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl << debug_msg << std::endl << std::endl;
}

void    Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl << info_msg << std::endl  << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl << warning_msg << std::endl << std::endl;
}

void    Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl << error_msg << std::endl << std::endl;
}