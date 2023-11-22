/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:25:37 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/22 17:02:03 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("Unnamed_bureaucrat")
{
    std::cout << "[Bureaucrat] Default constructor called" << std::endl;
    this->grade = 150;
    std::cout << "Bureaucrat name : " << getName() << std::endl;
    std::cout << "Bureaucrat grade: " << getGrade() << std::endl;
}

Bureaucrat::Bureaucrat( const std::string input_name, int input_grade ) : name(input_name)
{
    std::cout << "[Bureaucrat] String constructor called" << std::endl;
  //  try
 //   {
        if (input_grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (input_grade < 1)
            throw Bureaucrat::GradeTooHighException();
//    }
/*     catch(std::exception & e)
    {
        std::cout << "[Bureaucrat] Can't create the bureaucrat" << std::endl;
    } */
    this->grade = input_grade;
    std::cout << "Bureaucrat name : " << getName() << std::endl;
    std::cout << "Bureaucrat grade: " << getGrade() << std::endl;

}

Bureaucrat::Bureaucrat( Bureaucrat &val ) : name(val.getName()), grade(val.getGrade())
{
    std::cout << "[Bureaucrat] Copy constructor called" << std::endl;
    std::cout << "Bureaucrat name : " << getName() << std::endl;
    std::cout << "Bureaucrat grade: " << getGrade() << std::endl;
}

/* Bureaucrat & Bureaucrat::operator=( Bureaucrat &val )
{
    std::cout << "[Bureaucrat] Copy assignment operator called" << std::endl;
    this->name = val.getName();
    //this->grade = val.getGrade();
    return (*this);
} */

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
    else
    {
        grade++;
        std::cout << getName() << "'s garde has been decreased, it's now at " << getGrade() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what( void ) const throw()
{
    return ("The grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw()
{
    return ("The grade is too low");
}