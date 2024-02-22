/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:36:13 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/22 11:44:52 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	
	/*		TEST ADD NUMBER		*/
	
	Span	test(3);

	try
	{
		test.addNumber(0);
		test.addNumber(1);
		test.addNumber(2);
		test.printContent();
	}
	catch( std::exception &e )
	{
		std::cerr << "Exception encountered : " << e.what() << std::endl;
	}
	
	/*		TEST COPY CONSTRUCTOR		*/

	Span	cpy(test);

	cpy.printContent();

	/*		TEST COPY ASSIGNMENT OPERATOR		*/
	
	Span	cpy2;

	cpy2 = test;

	cpy2.printContent();

	/*		TEST EXCEPTION		*/

	try
	{
		test.printContent();
		test.addNumber(0);
	}
	catch( std::exception &e )
	{
		std::cerr << "Exception encountered : " << e.what() << std::endl;
	}

	/*		TEST SPANS ALGOS		*/

	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	//sp.addNumber(11);

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch ( std::exception &e )
	{
		std::cerr << "Exception encountered : " << e.what() << std::endl;
	}

	sp.printContent();
	sp.addRandNumbers();
	sp.printContent();

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch ( std::exception &e )
	{
		std::cerr << "Exception encountered : " << e.what() << std::endl;
	}

	return (0);
}