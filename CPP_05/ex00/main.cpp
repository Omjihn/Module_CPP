/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:25:34 by gbricot           #+#    #+#             */
/*   Updated: 2023/11/21 16:57:44 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
        Bureaucrat  Jean("Jean", 12);
    catch (std::exception & e)
    {
        std::cout << "Exception encountered" << std::endl;
        e.what();
    }
}