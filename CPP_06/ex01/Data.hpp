/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:29:39 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/03 16:14:25 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DATA_HPP
# define DATA_HPP

# include <iostream>

class	Data
{
	public:

		Data( void );
		Data( std::string input_string );
		Data( Data &val );
		~Data();

		Data & operator=( Data &val );

		std::string	&getString( void );

	private:

		std::string	SecretString;
};

#endif