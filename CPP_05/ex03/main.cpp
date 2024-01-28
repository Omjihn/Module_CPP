/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:52:14 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/25 11:14:46 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << "1st test :" << std::endl;
	try
	{
		Bureaucrat	dude("Michel", 1);

		Intern		intern_dude;

		ShrubberyCreationForm	*form1(intern_dude.makeForm("shrubbery creation", "House"));
		RobotomyRequestForm	*form2(intern_dude.makeForm("robotomy request", "Bosetti"));
		PresidentialPardonForm	*form3(intern_dude.makeForm("presidential pardon", "jsp"));

		dude.signForm(*form1);
		dude.signForm(*form2);
		dude.signForm(*form3);

		dude.executeForm(*form1);
		dude.executeForm(*form2);
		dude.executeForm(*form3);

		delete form1;
		delete form2;
		delete form3;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception encountered : " << e.what() << std::endl;
	}
}
