/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:52:40 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/22 19:16:08 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP


# include <iostream>
# include <ostream>
# include <exception>

#include "Bureaucrat.hpp"

class	AForm
{
	public:

		/*		DESTRUCTOR		*/

		virtual ~AForm();

		/*		EXCEPTIONS CLASSES		*/

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

		class	FormNotSignedException : public std::exception
		{
			public:

				virtual const char* what( void ) const throw();
		};

		/*		MEMBERS FUNCTIONS		*/

		AForm				& operator=( AForm &val );
		friend std::ostream	& operator<<( std::ostream& os, AForm& val);

		void	beSigned( Bureaucrat &signer );

		const std::string	getName( void );
		int					getGrade_s( void );
		int					getGrade_e( void );
		bool				ft_is_signed( void );

		virtual void	execute(Bureaucrat const & executor) const = 0;

	protected:

			/*		CONSTRUCTORS		*/

		AForm( void );
		AForm( const std::string input_name, const int i_grade_s, const int i_grade_e );
		AForm( AForm &val );

	private:

		const std::string	name;
		const int			grade_s;
		const int			grade_e;
		bool				is_signed;
};

#endif