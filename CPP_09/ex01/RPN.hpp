/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:47:05 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/07 16:53:50 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <stack>

class RPN
{
	private:

		/*		PRIVATE MEMBERS VARIABLES		*/

		std::string	operation;
		std::stack<int>		numbers;

		/*		PRIVATE MEMBERS FUNCTIONS		*/

		bool	is_operator( std::string &str ) const;
		bool	is_number( std::string &str ) const;
		bool	execOperator( char op );
		int		stringToInt( const std::string &str );

	public:

		/*		CONSTRUCTORS/DESTRUCTOR		*/

		RPN( std::string str );
		RPN( RPN &val );
		~RPN();

		/*		OPERATOR OVERLOADING		*/

		RPN	&operator=( RPN &cpy );

		/*		PUBLIC MEMBER FUNCTION		*/

		bool	doTheMaths( void );
};

#endif