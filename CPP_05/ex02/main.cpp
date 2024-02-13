/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:52:14 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/12 10:30:38 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << "1st test :" << std::endl;
	try
	{
		Bureaucrat	dude("Michel", 1);

		ShrubberyCreationForm	form1("House");
		RobotomyRequestForm		form2("Bosetti");
		PresidentialPardonForm	form3("Charles");

		dude.signForm(form1);
		dude.signForm(form2);
		dude.signForm(form3);

		dude.executeForm(form1);
		dude.executeForm(form2);
		dude.executeForm(form3);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception encountered : " << e.what() << std::endl;
	}

/*	std::cout << "2nd test :" << std::endl;		// Test to be sure Form is an abstract class
		try
		{
		AForm	test("test", 30, 28);

		}
		catch (std::exception & e)
		{
				std::cout << "Exception encountered : " << e.what() << std::endl;
	}*/

	std::cout << std::endl << "3rd test :" << std::endl;
	try
	{
		Bureaucrat	dude("Michel", 1);

		ShrubberyCreationForm	form1("Land");
		RobotomyRequestForm		form2("Bosetti");
		PresidentialPardonForm	form3("Charles");

		std::cout << form2;
		dude.signForm(form2);
		dude.signForm(form1);

		std::cout << dude;
		std::cout << form1;
		std::cout << form2;
		std::cout << form3;

		dude.executeForm(form2);
		dude.executeForm(form1);
		//dude.signForm(form3);
		dude.executeForm(form3);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception encountered : " << e.what() << std::endl;
	}
}
