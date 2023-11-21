/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:50:14 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/21 16:58:51 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

class   GradeTooHighException : public std::exception
{
    public:

        GradeTooHighException( void ) : message("Grade is too high\n") {}
        ~GradeTooHighException( void ) {}
        char    *what( void )
        {
            return (this->message.c_str());
        }

    private:

        std::string message;
};

class   GradeTooLowException : public std::exception
{
    public:

        GradeTooLowException( void ) : message("Grade is too low\n") {}
        ~GradeTooLowException( void ) {}
        char    *what( void )
        {
            return (this->message.c_str());
        }

    private:

        std::string message;
};

class   Bureaucrat
{
    public:

        Bureaucrat( void );
        Bureaucrat( const std::string input_name, int input_grade );
        ~Bureaucrat();
        
        
        
        const std::string   getName( void );
        unsigned char       getGrade( void );

    private:

        unsigned char       grade;
        const std::string   name;

};