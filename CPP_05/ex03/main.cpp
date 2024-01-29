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
		Bureaucrat	dude("Michel", 50);
		Intern		intern_dude;
		AForm	*form1 = intern_dude.makeForm("shrubbery creation", "House");
		AForm   *form2 = intern_dude.makeForm("robotomy request", "Bosetti");
		AForm   *form3 = intern_dude.makeForm("presidential pardon", dude.getName());

		std::cout << *form1;
		std::cout << *form2;
		std::cout << *form3;

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
	std::cout << "2st test :" << std::endl;
        try
        {
		Intern	dude;
		Intern	dude2(dude);
		Intern	dude3;
		dude3 = dude;
        }
        catch (std::exception & e)
        {
                std::cout << "Exception encountered : " << e.what() << std::endl;
        }
}
