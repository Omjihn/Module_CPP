/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:17:02 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/24 12:56:35 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <ostream>
# include <fstream>
# include <exception>
# include <cstdlib>
# include <ctime>

#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( const std::string input_target );
		~RobotomyRequestForm();

		void	execute( Bureaucrat const & executor ) const;

	private:

		const std::string	target;
};

#endif
