/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:19:02 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/13 12:37:20 by gbricot          ###   ########.fr       */
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
# include <map>
# include <vector>

class PmergeMe
{
	private:

		/*		PRIVATE MEMBERS VARIABLES		*/

		std::map < int, int >				_map_cont;
		std::vector < int >		_vector_cont;

		bool	_error;

		/*		PRIVATE MEMBERS FUNCTIONS		*/

		bool	checkInput( std::string str );
		bool	isNumber( std::string &str ) const;
		unsigned long	countTime( bool param );\

		void	initMap( int &ac, char **av );
		void	initVector( int &ac, char **av );

	public:

		/*		CONSTRUCTORS/DESTRUCTOR		*/

		PmergeMe( int &ac, char **av );
		PmergeMe( PmergeMe &val );
		~PmergeMe( );

		/*		OPERATOR OVERLOADING		*/

		PmergeMe	&operator=( PmergeMe &cpy );

		/*		PUBLIC MEMBERS FUNCTIONS		*/

		void	mapSorting( int &ac, char **av );
		void	vectorSorting( int &ac, char **av );

		bool	isError( void );

};



#endif