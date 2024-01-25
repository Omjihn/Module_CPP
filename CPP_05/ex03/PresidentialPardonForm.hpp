/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:53:49 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/24 13:56:45 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <ostream>
# include <fstream>
# include <exception>

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	public:

		PresidentialPardonForm( void );
		PresidentialPardonForm( const std::string input_target );
		~PresidentialPardonForm();

		void	execute( Bureaucrat const & executor ) const;

	private:

		const std::string	target;
};

#endif