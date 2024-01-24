/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:50:14 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/24 12:50:58 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <ostream>
# include <exception>

class	AForm;

class	Bureaucrat
{
	public:

		/*      CONSTRUCTORS/DESTRUCTOR    */

		Bureaucrat( void );
		Bureaucrat( const std::string input_name, int input_grade );
		Bureaucrat( Bureaucrat &val );
		~Bureaucrat();

		/*      EXCEPTIONS CLASSES      */

		class	GradeTooHighException : public std::exception
		{
			public:

				virtual const char* what( void ) const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:

				virtual const char* what( void ) const throw();
		};

		/*      MEMBERS FUNCTIONS       */

		Bureaucrat			& operator=( Bureaucrat &val );
		friend std::ostream & operator<<( std::ostream& os, Bureaucrat& val);

		void	signForm( AForm &form );
		void	executeForm( AForm const &form ) const;

		const std::string	getName( void ) const;
		int					getGrade( void ) const;

		void	increaseGrade( void );
		void	decreaseGrade( void );

	private:

		const std::string	name;
		int					grade;

};

#endif
