/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:18:54 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/23 10:26:24 by gbricot          ###   ########.fr       */
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
	std::sort( _deque_cont.begin(), _deque_cont.end() );
	unsigned int exec_time = countTime(STOP);
	std::cout << MSG_RANGE << ac - 1 << MSG_TYPE << "deque : " << exec_time << " us" << std::endl;
}

void	PmergeMe::vectorSorting( int &ac, char **av )
{
	countTime(START);
	initContainer( ac, av, _vector_cont );
	std::sort(_vector_cont.begin(), _vector_cont.end());
	unsigned long exec_time = countTime(STOP);
	std::cout << MSG_RANGE << ac - 1 << MSG_TYPE << "vector : " << exec_time << " us" << std::endl;
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