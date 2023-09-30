/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:14:58 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/30 14:03:49 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    Bosetti;

    Bosetti.complain("WARNING");
    Bosetti.complain("ERROR");
    Bosetti.complain("INFO");
    Bosetti.complain("DEBUG");
    Bosetti.complain("");
}