/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:11:22 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/27 14:35:40 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BRAIN_HPP
 #define BRAIN_HPP

class   Brain
{
    public:

        Brain( void );
        ~Brain();

    private:

        std::string ideas[100];
};

#endif