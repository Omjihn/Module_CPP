/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:18:54 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/13 12:50:15 by gbricot          ###   ########.fr       */
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

PmergeMe::PmergeMe( PmergeMe &val ) :	_map_cont(val._map_cont), \
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
	_map_cont = cpy._map_cont;
	_vector_cont = cpy._vector_cont;
	_error = cpy._error;
	return (*this);
}

void	PmergeMe::initMap( int &ac, char **av )
{
	int	nb;
	for (int i = 1; i < ac; i++)
	{
		std::string str(av[i]);
		std::istringstream iss(str);
		iss >> nb;
		_map_cont[i - 1] = nb;
	}
}

void	PmergeMe::mapSorting( int &ac, char **av )
{
	countTime(START);
	initMap( ac, av );
	//sortMap();
	unsigned int exec_time = countTime(STOP);
	std::cout << MSG_RANGE << ac - 1 << MSG_TYPE << "map : " << exec_time << " us" << std::endl;
}

void	PmergeMe::initVector( int &ac, char **av )
{
	unsigned int	nb;
	for (int i = 1; i < ac; i++)
	{
		std::string str(av[i]);
		std::istringstream iss(str);
		iss >> nb;
		_vector_cont.push_back(nb);
	}
}

void	PmergeMe::vectorSorting( int &ac, char **av )
{
	countTime(START);
	initVector( ac, av );
	std::sort(_vector_cont.begin(), _vector_cont.end());
	unsigned long exec_time = countTime(STOP);
	std::cout << MSG_RANGE << ac - 1 << MSG_TYPE << "vector : " << exec_time << " us" << std::endl;
/*	    for (std::vector< unsigned int>::iterator it = _vector_cont.begin(); it != _vector_cont.end(); ++it) {
        std::cout << *it << "\n";
    } */
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