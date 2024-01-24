/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:52:58 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/24 14:28:38 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm( void ) : name("Interesting form"), grade_s(75), grade_e(75)
{
	this->is_signed = 0;
	std::cout << "[AForm] Default constructor called" << std::endl;
}

AForm::AForm( const std::string input_name, const int i_grade_s, const int i_grade_e ) \
	: name(input_name), grade_s(i_grade_s), grade_e(i_grade_e)
{
	std::cout << "[AForm] String/Grades constructor called" << std::endl;
	if (this->grade_e > 150 || this->grade_s > 150)
		throw   AForm::GradeTooLowException();
	else if (this->grade_e < 1 || this->grade_s < 1)
		throw   AForm::GradeTooHighException();
	this->is_signed = 0;
}

AForm::AForm( AForm &val ) \
	: name(val.getName()), grade_s(val.getGrade_s()), grade_e(val.getGrade_e())
{
	this->is_signed = val.ft_is_signed();
	std::cout << "[AForm] Copy constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "[AForm] Destructor called" << std::endl;
}

AForm & AForm::operator=( AForm &val )
{
	this->is_signed = val.ft_is_signed();
	return (*this);
}

std::ostream	& operator<<( std::ostream &os, AForm& val )
{
	os << "The Form : " << val.getName() << " needs " << val.getGrade_s() << \
		" to be signed and " << val.getGrade_e() << " to be executed. " << \
		"The Form is ";
	if (!val.ft_is_signed())
		os << "not ";
	os << "signed." << std::endl;
	return (os);
}

void    AForm::beSigned( Bureaucrat &signer )
{
	if (this->is_signed)
		return ;
	if (signer.getGrade() > this->getGrade_s())
		throw   AForm::GradeTooLowException();
	this->is_signed = 1;
}

const std::string	AForm::getName( void ) const
{
	return (this->name);
}

int	AForm::getGrade_s( void )
{
	return (this->grade_s);
}

int	AForm::getGrade_e( void ) const
{
	return (this->grade_e);
}

bool	AForm::ft_is_signed( void ) const
{
	return (this->is_signed);
}

void	AForm::checkBeforeExec( Bureaucrat const & executor ) const
{
	if (!ft_is_signed())
		throw	AForm::FormNotSignedException();
	else if (executor.getGrade() > getGrade_e())
		throw	AForm::GradeTooLowException();
}

const char	*AForm::GradeTooHighException::what( void ) const throw()
{
	return ("The grade is too high");
}

const char	*AForm::GradeTooLowException::what( void ) const throw()
{
	return ("The grade is too low");
}

const char	*AForm::FormNotSignedException::what( void ) const throw()
{
	return ("The form is not signed");
}