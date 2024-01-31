/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:18:15 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/31 16:17:27 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) \
	: AForm("RobotomyRequestForm", 72, 45), target("Unknow target")
{
	std::cout << "[RobotomyRequestForm] Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string input_target ) \
	: AForm("RobotomyRequestForm", 72, 45), target(input_target)
{
	std::cout << "[RobotomyRequestForm] String constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "[RobotomyRequestForm] Destructor called" << std::endl;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor) const
{
	this->checkBeforeExec(executor);
	static unsigned int	random;
	random += getpid();
	srand(random);
	std::cout << "*Driling noises*" << std::endl;
	if (std::rand() & 1)
		std::cout << this->target << " has been robotomized. 🤖" << std::endl;
	else
		std::cout << this->target << "'s robotomy failed." << std::endl;
}