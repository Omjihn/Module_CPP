/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:26:10 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/24 11:52:55 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <ostream>
# include <fstream>
# include <exception>

#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{
	public:

		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const std::string input_target );
		~ShrubberyCreationForm();

		void	execute( Bureaucrat const & executor ) const;

	private:

		const std::string	target;
};

#endif
