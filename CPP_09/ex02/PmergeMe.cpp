/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:18:54 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/26 11:19:39 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( int &ac, char **av) : _error (false)
{
	for (int i = 1; i < ac; i++)
	{
		if (!checkInput(av[i]))
		{
			_error = true;
			return ;
		}
	}
}

PmergeMe::PmergeMe( PmergeMe &val ) :	_deque_cont(val._deque_cont), \
										_vector_cont(val._vector_cont), \
										_error(val._error)
{
	
}

PmergeMe::~PmergeMe( )
{
	
}

/*		OPERATOR OVERLOADING		*/

PmergeMe	&PmergeMe::operator=( PmergeMe &cpy )
{
	_deque_cont = cpy._deque_cont;
	_vector_cont = cpy._vector_cont;
	_error = cpy._error;
	return (*this);
}

void	PmergeMe::dequeSorting( int &ac, char **av )
{
	countTime(START);
	initContainer( ac, av, _deque_cont );
	mergeInsertionSort(_deque_cont, 0, _deque_cont.size() - 1, 20);
	unsigned int exec_time = countTime(STOP);
	std::cout << MSG_RANGE << ac - 1 << MSG_TYPE << "deque : " << exec_time << " us" << std::endl;
}

void	PmergeMe::vectorSorting( int &ac, char **av )
{
	countTime(START);
	initContainer( ac, av, _vector_cont );
	mergeInsertionSort(_vector_cont, 0, _vector_cont.size() - 1, 20);
	unsigned long exec_time = countTime(STOP);
	std::cout << MSG_RANGE << ac - 1 << MSG_TYPE << "vector : " << exec_time << " us" << std::endl;
}

void	PmergeMe::printContainers( void )
{
	std::cout << "deque : ";
	for (std::deque<int>::iterator it = _deque_cont.begin(); it != _deque_cont.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "vector : ";
	for (std::vector<int>::iterator it = _vector_cont.begin(); it != _vector_cont.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

unsigned long	PmergeMe::countTime( bool param )
{
	static unsigned long	time_start = 0;
	struct timeval			tv;

	gettimeofday(&tv, NULL);
	if (param == START)
	{
		time_start = static_cast<unsigned long>(tv.tv_sec) * 1000000UL + tv.tv_usec;
		return (0);
	}
	else
		return ((static_cast<unsigned long>(tv.tv_sec) * 1000000UL + tv.tv_usec) - time_start);
}

bool	PmergeMe::isNumber( std::string &str ) const
{
	std::string::iterator	it;
	for(it = str.begin(); it != str.end(); it++)
	{
		if (!std::isdigit(*it))
			return (false);
	}
	return (true);
}

bool	PmergeMe::checkInput( std::string str )
{
	if (!isNumber(str))
		return (false);

	std::istringstream	iss(str);
	int					nb;

	if (iss >> nb)
	{
		if (nb < 0)
			return (false);
	}
	else
		return (false);
	return (true);
}

bool	PmergeMe::isError( void )
{
	return (_error);
}