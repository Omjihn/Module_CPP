/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:25:37 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/23 13:44:10 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("Unnamed_bureaucrat")
{
    std::cout << "[Bureaucrat] Default constructor called" << std::endl;
    this->grade = 150;
}

Bureaucrat::Bureaucrat( const std::string input_name, int input_grade ) : name(input_name)
{
    std::cout << "[Bureaucrat] String constructor called" << std::endl;
    if (input_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (input_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade = input_grade;
}

Bureaucrat::Bureaucrat( Bureaucrat &val ) : name(val.getName()), grade(val.getGrade())
{
    std::cout << "[Bureaucrat] Copy constructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat &val )
{
    std::cout << "[Bureaucrat] Copy assignment operator called" << std::endl;
    this->grade = val.getGrade();
    return (*this);
}

std::ostream    & operator<<( std::ostream &os, Bureaucrat& val )
{
    os << val.getName() << ", bureaucrat grade " << val.getGrade() << std::endl;
    return (os);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "[Bureaucrat] Destructor called" << std::endl;
}

const std::string Bureaucrat::getName( void )
{
    return (this->name);
}

int Bureaucrat::getGrade( void )
{
    return (this->grade);
}

void    Bureaucrat::increaseGrade( void )
{
    if(getGrade() < 2)
        throw   Bureaucrat::GradeTooHighException();
    grade--;
    std::cout << getName() << "'s garde has been increased, it's now at " << getGrade() << std::endl;
}

void    Bureaucrat::decreaseGrade( void )
{
    if(getGrade() > 149)
        throw   Bureaucrat::GradeTooLowException();
    grade++;
    std::cout << getName() << "'s garde has been decreased, it's now at " << getGrade() << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what( void ) const throw()
{
    return ("The grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw()
{
    return ("The grade is too low");
}