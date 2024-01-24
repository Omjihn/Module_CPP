/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:52:14 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/24 12:51:47 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::cout << "1st test :" << std::endl;
	try
	{
		Bureaucrat	dude("Michel", 20);
		RobotomyRequestForm	test("Land");
		std::cout << test;
		dude.executeForm(test);
		dude.signForm(test);
		std::cout << test;
		dude.executeForm(test);
		std::cout << test;
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
}