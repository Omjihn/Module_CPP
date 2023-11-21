/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:25:37 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/21 16:58:15 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("Unnamed_bureaucrat")
{
    std::cout << "[Bureaucrat] Default constructor called" << std::endl;
    this->grade = 150;
    std::cout << "Bureaucrat name: " << this->name << std::endl;
    std::cout << "Bureaucrat grade: " << this->grade << std::endl;
}

Bureaucrat::Bureaucrat( const std::string input_name, int input_grade ) : name(input_name)
{
    std::cout << "[Bureaucrat] String constructor called" << std::endl;
    if (input_grade > 150)
        throw GradeTooHighException();
    else if (input_grade > 1)
        throw GradeTooLowException();
    catch(std::exception & e)
    {
        std::cout << "[Bureaucrat] Can't create the bureaucrat" << std::endl;
    }
    std::cout << "Bureaucrat name: " << this->name << std::endl;
    std::cout << "Bureaucrat grade: " << this->grade << std::endl;

}

Bureaucrat::~Bureaucrat( )
{
    std::cout << "[Bureaucrat] Destructor called" << std::endl;
}

const std::string Bureaucrat::getName( void )
{
    return (this->name);
}

unsigned char   Bureaucrat::getGrade( void )
{
    return (this->grade);
}