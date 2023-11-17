/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:25:37 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/17 16:01:09 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("")
{
    
}

Bureaucrat::Bureaucrat( const std::string input_name ) : name(input_name)
{
    
}

Bureaucrat::~Bureaucrat( void )
{
    std:cout << "[Bureaucrat] Destructor called" << std::endl;
}