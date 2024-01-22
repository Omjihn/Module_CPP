/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:52:14 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/22 14:45:49 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "1st test :" << std::endl;
	try
	{
		Form	nda("nda", 60, 200);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception encountered : " << e.what() << std::endl;
	}

	std::cout << std::endl << "2nd test :" << std::endl;
	try
	{
		Bureaucrat	Bosetti("Bosetti", 5);
		Form	nda("nda", 10, 150);
		std::cout << nda;
		Bosetti.signForm(nda);
		std::cout << nda;
		Bosetti.signForm(nda);
		std::cout << nda;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception encountered : " << e.what() << std::endl;
	}

	std::cout << std::endl << "3rd test :" << std::endl;
	try
	{
		Form	InterestingForm;
		Bureaucrat	Student;
		std::cout << Student;
		std::cout << InterestingForm;
		Student.signForm(InterestingForm);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception encountered : " << e.what() << std::endl;
	}

	std::cout << std::endl << "4th test :" << std::endl;
	try
	{
		Form	SatisfactionForm42("42SatisfactionForm", 1, 1);
		Bureaucrat	Sherpa("Sherpa", 2);
		std::cout << Sherpa;
		std::cout << SatisfactionForm42;
		Sherpa.increaseGrade();
		Sherpa.signForm(SatisfactionForm42);
		std::cout << SatisfactionForm42;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception encountered : " << e.what() << std::endl;
	}
}