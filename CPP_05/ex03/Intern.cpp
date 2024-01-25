/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:25:43 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/25 12:20:14 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	std::cout << "[Intern] Default constructor called" << std::endl;
	this->accepted_names[0] = "shrubbery creation";
	this->accepted_names[1] = "robotomy request";
	this->accepted_names[2] = "presidential pardon";
	this->function_ptr[0] = &Intern::Create_SCF;
	this->function_ptr[1] = &Intern::Create_RRF;
	this->function_ptr[2] = &Intern::Create_PPF;
}

Intern::~Intern()
{
	std::cout << "[Intern] Destructor called" << std::endl;
}

AForm	*Intern::makeForm( const std::string &form_name, const std::string &i_target )
{
	for	(char i = 0; i < 3; i++)
	{
		if (form_name == accepted_names[i])
		{
			return (this->*function_ptr[i])(i_target);
		}
	}
	return (NULL);
}

AForm *Intern::Create_SCF(const std::string &target) const
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::Create_RRF(const std::string &target) const
{
    return (new RobotomyRequestForm(target));
}

AForm *Intern::Create_PPF(const std::string &target) const
{
    return (new PresidentialPardonForm(target));
}