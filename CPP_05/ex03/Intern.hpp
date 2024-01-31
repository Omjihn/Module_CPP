/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:19:45 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/31 16:34:34 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	public:

		Intern();
		Intern( Intern &cpy );
		~Intern();

		Intern	&operator=( const Intern& cpy );
		AForm	*makeForm( const std::string &i_form_name, const std::string &i_target );

	private:

		typedef	AForm	*(Intern::*func_array)(const std::string &);
		AForm	*Create_SCF( const std::string &target);
		AForm	*Create_RRF( const std::string &target);
		AForm	*Create_PPF( const std::string &target);
};

#endif
