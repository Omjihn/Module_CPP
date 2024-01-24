/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:45:29 by gbricot           #+#    #+#             */
/*   Updated: 2024/01/24 12:44:55 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("ShrubberyCreationForm", 145, 137), target("Unknow target")
{
	std::cout << "[ShrubberyCreationForm] Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string input_target ) : AForm("ShrubberyCreationForm", 145, 137), target(input_target)
{
	std::cout << "[ShrubberyCreationForm] String constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "[ShrubberyCreationForm] Destructor called" << std::endl;
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor) const
{
	checkBeforeExec(executor);
	std::ofstream	file;
	file.open((this->target + "_shrubbery").c_str());
	file <<
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
	file.close();
}
