/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:25:43 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/12 10:20:32 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	std::cout << "[Intern] Default constructor called" << std::endl;
}

Intern::Intern( Intern &cpy )
{
	std::cout << "[Intern] Copy constructor called" << std::endl;
	*this = cpy;
}

Intern::~Intern()
{
	std::cout << "[Intern] Destructor called" << std::endl;
}

Intern	&Intern::operator=( const Intern& cpy )
{
	(void) cpy;
	return (*this);
}

AForm	*Intern::makeForm( const std::string &form_name, const std::string &i_target )
{
	Intern::func_array	func_ptr[] = {	&Intern::Create_SCF,
										&Intern::Create_RRF,
										&Intern::Create_PPF};
	std::string	accepted_names[] = {	"shrubbery creation",
										"robotomy request",
										"presidential pardon"};

	for	(int i = 0; i < 3; i++)
	{
		if (!form_name.compare(accepted_names[i]))
		{
			std::cout << "Intern creates " << accepted_names[i] << " form" << std::endl;
			return ((this->*func_ptr[i])(i_target));
		}
	}
	std::cout << "Unknow form" << std::endl;
	return (NULL);
}

AForm	*Intern::Create_SCF(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::Create_RRF(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::Create_PPF(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}
