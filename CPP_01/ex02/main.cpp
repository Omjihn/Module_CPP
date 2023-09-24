/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:46:18 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/24 16:46:20 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "Memory address of str      : "<< &str << std::endl;
    std::cout << "Memory address in stringPTR: "<< stringPTR << std::endl;
    std::cout << "Memory address in stringREF: "<< &stringREF << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "Value of str      : "<< str << std::endl;
    std::cout << "Value of stringPTR: "<< *stringPTR << std::endl;
    std::cout << "Value of stringREF: "<< stringREF << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    return (0);
}