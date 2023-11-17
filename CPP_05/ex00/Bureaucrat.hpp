/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:50:14 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/17 15:52:19 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Bureaucrat
{
    public:

        Bureaucrat( void );
        Bureaucrat( const std::string input_name );
        ~Bureaucrat();


    private:

        unsigned char       grade;
        const std::string   name;

};