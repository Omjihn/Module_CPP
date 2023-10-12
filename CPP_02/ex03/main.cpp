/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:54:56 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/12 18:26:54 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool    bsp( const Point &one, const Point &two, const Point &three, const Point &point );

int main(void)
{
    const Point a(0, 0);
    const Point b(10, 30);
    const Point c(20, 0);
    Point test(0.1, 31.1);
    
    if (bsp(a, b, c, test))
        std::cout << "The point is inside" << std::endl;
    else
        std::cout << "The point is outside" << std::endl;
    return (0);
}