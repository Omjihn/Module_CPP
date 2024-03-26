/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:19:02 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/26 09:55:46 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# define START	0
# define STOP	1

# define MSG_RANGE	"Time to process a range of "
# define MSG_TYPE	" elements with std::"

# include <iostream>
# include <sstream>
# include <sys/time.h>
# include <algorithm>
# include <unistd.h>
# include <deque>
# include <vector>

# include "initContainer.tpp"
# include "sortMergeInsertion.tpp"

class PmergeMe
{
	private:

		/*		PRIVATE MEMBERS VARIABLES		*/

		std::deque < int >		_deque_cont;
		std::vector < int >		_vector_cont;

		bool	_error;

		/*		PRIVATE MEMBERS FUNCTIONS		*/

		bool	checkInput( std::string str );
		bool	isNumber( std::string &str ) const;
		unsigned long	countTime( bool param );

	public:

		/*		CONSTRUCTORS/DESTRUCTOR		*/

		PmergeMe( int &ac, char **av );
		PmergeMe( PmergeMe &val );
		~PmergeMe( );

		/*		OPERATOR OVERLOADING		*/

		PmergeMe	&operator=( PmergeMe &cpy );

		/*		PUBLIC MEMBERS FUNCTIONS		*/

		void	dequeSorting( int &ac, char **av );
		void	vectorSorting( int &ac, char **av );

		bool	isError( void );

};



#endif