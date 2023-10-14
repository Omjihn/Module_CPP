/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:54:56 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/14 20:32:47 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool    bsp( const Point &one, const Point &two, const Point &three, const Point &point );

static void    ft_test_case( const Point a, const Point b, const Point c, const Point p )
{
    if (bsp(a, b, c, p))
        std::cout << "\033[0;32mYes !\033[0;37m" << std::endl;
    else
        std::cout << "\033[0;31mNo.\033[0;37m" << std::endl;
    std::cout << "Online solution : https://planetcalc.com/8108/?ax=" << a.get_x() << "&ay=" << a.get_y() << "&bx=" << b.get_x() << "&by=" << b.get_y() << "&cx=" << c.get_x() <<  "&cy=" << c.get_x() << "&px=" << p.get_fix_x() << "&py=" << p.get_y() << std::endl;
}

int main(void)
{
    ft_test_case(Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15));
    ft_test_case(Point(0, 0), Point(10, 30), Point(20, 0), Point(30, 15));
    
    /*              Create yours own tests                           */
    ft_test_case(Point(0, 0), Point(50, 150), Point(200, -70), Point(100, -12));

    //std::cout << std::endl << "More details : " << "https://planetcalc.com/8108/" << std::endl;
    return (0);
}