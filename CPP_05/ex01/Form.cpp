/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:52:58 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/24 16:25:58 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ) : name("Interesting form"), grade_s(75), grade_e(75)
{
    this->is_signed = 0;
    std::cout << "[Form] Default constructor called" << std::endl;
}

Form::Form( const std::string input_name, const int i_grade_s, const int i_grade_e )  : name(input_name), grade_s(i_grade_s), grade_e(i_grade_e)
{
    if (this->grade_e > 150 || this->grade_s > 150)
        throw   Form::GradeTooLowException();
    else if (this->grade_e < 1 || this->grade_s < 1)
        throw   Form::GradeTooHighException();
    this->is_signed = 0;
    std::cout << "[Form] String/Grades constructor called" << std::endl;
}

Form::Form( Form &val ) : name(val.getName()), grade_s(val.getGrade_s()), grade_e(val.getGrade_e())
{
    this->is_signed = val.ft_is_signed();
    std::cout << "[Form] Copy constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "[Form] Destructor called" << std::endl;
}

Form & Form::operator=( Form &val )
{
    this->is_signed = val.ft_is_signed();
    return (*this);
}

std::ostream    & operator<<( std::ostream &os, Form& val )
{
    os << "The form : " << val.getName() << " needs " << val.getGrade_s() << \
        " to be signed and " << val.getGrade_e() << " to be executed." << "The form is " <<  std::endl;
    if (!val.ft_is_signed())
        os << "not ";
    os << "signed." << std::endl;
    return (os);
}

void    Form::beSigned( Bureaucrat &signer )
{
    if (this->is_signed)
        return ;
    if (signer.getGrade() < this->getGrade_s())
        throw   Form::GradeTooLowException();
    this->is_signed = 1;
}

const std::string   Form::getName( void )
{
    return (this->name);
}

int   Form::getGrade_s( void )
{
    return (this->grade_s);
}

int   Form::getGrade_e( void )
{
    return (this->grade_e);
}

bool    Form::ft_is_signed( void )
{
    return (this->is_signed);
}