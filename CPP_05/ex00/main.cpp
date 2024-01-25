/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:25:34 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/25 11:07:35 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	/*      Dwight is better    */
	
	try
	{
		Bureaucrat  Dwight("Dwight", 1);
		std::cout << Dwight;
		Dwight.decreaseGrade();
		Dwight.increaseGrade();
		Dwight.increaseGrade();
	}
	catch (std::exception & e)
	{
		std::cout << "Exception encountered : " << e.what() << std::endl;
	}
	
	/*      Toby is bad (but we love him)   */
	
	try
	{
		Bureaucrat  Toby;
		std::cout << Toby;
		Toby.increaseGrade();
		Toby.decreaseGrade();
		Toby.decreaseGrade();
	}
	catch (std::exception & e)
	{
		std::cout << "Exception encountered : " << e.what() << std::endl;
	}
	
	/*      Stanlay is copying Phyllis (to have more time to do some crosswords)    */
	
	try
	{
		Bureaucrat  Phyllis("Phyllis", 2);
		std::cout << Phyllis;
		Bureaucrat  Stanlay;
		Stanlay = Phyllis;
		std::cout << Stanlay;
		Stanlay.increaseGrade();
		Stanlay.increaseGrade();
	}
	catch (std::exception & e)
	{
		std::cout << "Exception encountered : " << e.what() << std::endl;
	}
}