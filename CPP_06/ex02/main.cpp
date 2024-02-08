/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:54:58 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/08 19:55:52 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate( void )
{
	static unsigned int	random;
	random += getpid();
	srand(random);
	random = std::rand();
	switch (random % 3)
	{
		case 0:
			//std::cout << "A" <<std::endl;
			return (new A());
		case 1:
			//std::cout << "B" <<std::endl;
			return (new B());
		case 2:
			//std::cout << "C" <<std::endl;
			return (new C());
	}
	return (NULL);
}

void	identify( Base *p )
{
	if (!p)
	{
		std::cout << "Base no type.." << std::endl;
		return ;
	}
	try
	{
		dynamic_cast<A&>(*p);
		std::cout << "Type is : A" << std::endl;
		return ;
	}
	catch (...)
	{}
	try
	{
		dynamic_cast<B&>(*p);
		std::cout << "Type is : B" << std::endl;
		return ;
	}
	catch (...)
	{}
	try
	{
		dynamic_cast<C&>(*p);
		std::cout << "Type is : C" << std::endl;
		return ;
	}
	catch (...)
	{}
}

void	identify( Base &p )
{
	identify(&p);
}

int	main( void )
{
	Base	*test1 = generate();
	Base	*test2 = generate();
	Base	*test3 = generate();

	identify(*test1);
	identify(test1);

	identify(*test2);
	identify(test2);

	identify(*test3);
	identify(test3);

	delete test1;
	delete test2;
	delete test3;
	return (0);
}