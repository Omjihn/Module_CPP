/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:54:58 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/24 14:28:07 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) \
	: AForm("PresidentialPardonForm", 25, 5), target("Unknow target")
{
	std::cout << "[PresidentialPardonForm] Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const std::string input_target ) \
	: AForm("PresidentialPardonForm", 25, 5), target(input_target)
{
	std::cout << "[PresidentialPardonForm] String constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "[PresidentialPardonForm] Destructor called" << std::endl;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor) const
{
	this->checkBeforeExec(executor);
	std::cout << this->target << \
		" has been pardoned by Zaphod Beeblebrox." << std::endl;
}