/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:52:40 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/24 12:38:49 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP


# include <iostream>
# include <ostream>
# include <exception>

class Bureaucrat;

class   Form
{
	public:

		/*      CONSTRUCTORS/DESTRUCTOR    */

		Form( void );
		Form( const std::string input_name, const int i_grade_s, const int i_grade_e );
		Form( Form &val );
		~Form();

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

		Form				& operator=( Form &val );
		friend std::ostream	& operator<<( std::ostream& os, Form& val);

		void	beSigned( Bureaucrat &signer );

		const std::string	getName( void );
		int					getGrade_s( void );
		int					getGrade_e( void );
		bool				ft_is_signed( void );

	private:

		const std::string	name;
		const int			grade_s;
		const int			grade_e;
		bool				is_signed;
};

#endif