/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:45:29 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/22 19:16:37 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "[ShrubberyCreationForm] Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string &input_target ) : AForm("ShrubberyCreationForm", 145, 137), target(input_target)
{
	std::cout << "[ShrubberyCreationForm] String constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "[ShrubberyCreationForm] Destructor called" << std::endl;
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor)
{
	if (!ft_is_signed())
		throw	AForm::FormNotSignedException();
	else if (executor.getGrade() > getGrade_e())
		throw	AForm::GradeTooLowException();
	std::ofstream outfile(this->target + "_shrubbery");
	outfile <<
		"                                                          .\n" << \
		"                                              .         ;\n" << \
		"                 .              .              ;%     ;;\n" << \
		"                   ,           ,                :;%  %;\n" << \
		"                    :         ;                   :;%;'     .,\n" << \
		"           ,.        %;     %;            ;        %;'    ,;\n" << \
		"             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n" << \
		"              %;       %;%;      ,  ;       %;  ;%;   ,%;'\n" << \
		"               ;%;      %;        ;%;        % ;%;  ,%;'\n" << \
		"                `%;.     ;%;     %;'         `;%%;.%;'\n" << \
		"                 `:;%.    ;%%. %@;        %; ;@%;%'\n" << \
		"                    `:%;.  :;bd%;          %;@%;'\n" << \
		"                      `@%:.  :;%.         ;@@%;'\n" << \
		"                        `@%.  `;@%.      ;@@%;\n" << \
		"                          `@%%. `@%%    ;@@%;\n" << \
		"                            ;@%. :@%%  %@@%;\n" << \
		"                              %@bd%%%bd%%:;\n" << \
		"                                #@%%%%%:;;\n" << \
		"                                %@@%%%::;\n" << \
		"                                %@@@%(o);  . '\n" << \
		"                                %@@@o%;:(.,'\n" << \
		"                            `.. %@@@o%::;\n" << \
		"                               `)@@@o%::;\n" << \
		"                                %@@(o)::;\n" << \
		"                               .%@@@@%::;\n" << \
		"                               ;%@@@@%::;\n" << \
		"                              ;%@@@@%%:;;;.\n" << \
		"                          ...;%@@@@@%%:;;;;,..\n";
	outfile.close();
}