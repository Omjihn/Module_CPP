/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:32:14 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/18 15:47:37 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

void	main_subject( void )
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return ;
}

void	main_vector( void )
{
	std::vector<int>	vect;
	vect.push_back(5);
	vect.push_back(17);
	std::cout << vect.back() << std::endl;
	vect.pop_back();
	std::cout << vect.size() << std::endl;
	vect.push_back(3);
	vect.push_back(5);
	vect.push_back(737);
	// [...]
	vect.push_back(0);
	for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	return ;
}

void	main_deque( void )
{
	std::deque<int> val;
	val.push_back(5);
	val.push_back(17);
	std::cout << val.back() << std::endl;
	val.pop_back();
	std::cout << val.size() << std::endl;
	val.push_back(3);
	val.push_back(5);
	val.push_back(737);
	// [...]
	val.push_back(0);
	for (std::deque<int>::iterator it = val.begin(); it != val.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	return ;
}

int main()
{
	std::cout << "[MAIN_SUBJECT]" << std::endl;
	main_subject();
	std::cout << "[MAIN_VECTOR]" << std::endl;
	main_vector();
	std::cout << "[MAIN_DEQUE]" << std::endl;
	main_deque();
	return (0);
}