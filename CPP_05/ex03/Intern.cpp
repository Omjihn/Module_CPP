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
}

Intern::~Intern()
{
	std::cout << "[Intern] Destructor called" << std::endl;
}

AForm	*Intern::makeForm( const std::string &form_name, const std::string &i_target )
{
	Intern::func_array	func_ptr[3] = {&Intern::Create_SCF, &Intern::Create_RRF, &Intern::Create_PPF};

	std::string	accepted_names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for	(char i = 0; i < 3; i++)
	{
		if (form_name == accepted_names[i])
		{
			return (this.*func_ptr[i](i_target));
		}
	}
	return (NULL);
}

AForm *Intern::Create_SCF(const std::string &target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::Create_RRF(const std::string &target)
{
    return (new RobotomyRequestForm(target));
}

AForm *Intern::Create_PPF(const std::string &target)
{
    return (new PresidentialPardonForm(target));
}
