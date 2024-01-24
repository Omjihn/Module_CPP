/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:18:15 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/24 12:58:56 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("RobotomyRequestForm", 72, 45), target("Unknow target")
{
	std::cout << "[RobotomyRequestForm] Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string input_target ) : AForm("RobotomyRequestForm", 72, 45), target(input_target)
{
	std::cout << "[RobotomyRequestForm] String constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "[RobotomyRequestForm] Destructor called" << std::endl;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor) const
{
	checkBeforeExec(executor);
	srand(time(NULL));
	if (std::rand() & 1)
		std::cout << executor.getName() << " has been robotomized. 🤖" << std::endl;
	else
		std::cout << executor.getName() << "'s robotomy failed." << std::endl;
}