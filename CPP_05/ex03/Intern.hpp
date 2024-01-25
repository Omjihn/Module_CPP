/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:19:45 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/25 12:20:11 by gbricot          ###   ########.fr       */
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
		~Intern();

		AForm	*makeForm( const std::string &i_form_name, const std::string &i_target );

	private:

		std::string	accepted_names[3];
		AForm *(*function_ptr[3])(const std::string &);

		AForm	*Create_SCF( const std::string &target) const;
		AForm	*Create_RRF( const std::string &target) const;
		AForm	*Create_PPF( const std::string &target) const;
};

#endif