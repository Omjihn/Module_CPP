/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:14:26 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/30 14:09:09 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain( std::string level )
{
    Harl::func_array func_ptr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    
    int i = 0;
    while (i < 4)
    {
        if (!tab[i].compare(level))
        {
            (this->*func_ptr[i])();
            return ;
        }
        i++;
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
    

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}