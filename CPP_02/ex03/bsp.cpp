/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:58:07 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/14 20:05:42 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed   ft_get_side( Point const &v_start, Point const &v_end, Point const &p )
{
    Point   v((v_end.get_fix_x() - v_start.get_fix_x()).toFloat(), (v_end.get_fix_y() - v_start.get_fix_y()).toFloat());
    Point   w((p.get_fix_x() - v_start.get_fix_x()).toFloat(), (p.get_fix_y() - v_start.get_fix_y()).toFloat());

    return (Fixed((v.get_fix_x() * w.get_fix_y() - (v.get_fix_y() * w.get_fix_x()))));
}

bool    bsp( Point const &a, Point const &b, Point const &c, Point const &p )
{
    std::cout << "Triangle coords :" << std::endl << std::endl;
    std::cout << "a.x = " << a.get_fix_x() << " | a.y = " << a.get_fix_y() << std::endl;
    std::cout << "b.x = " << b.get_fix_x() << " | b.y = " << b.get_fix_y() << std::endl;
    std::cout << "c.x = " << c.get_fix_x() << " | c.y = " << c.get_fix_y() << std::endl << std::endl;
    std::cout << "Is that point is inside the triangle ?" << std::endl << std::endl;
    std::cout << "p.x = " << p.get_fix_x() << " | p.y = " << p.get_fix_y() << std::endl << std::endl;

    Fixed res_1(ft_get_side(a, b, p));
    Fixed res_2(ft_get_side(b, c, p));
    Fixed res_3(ft_get_side(c, a, p));

    if (res_1 == 0 || res_2 == 0 || res_3 == 0)
        return (false);
    else if (res_1 > 0 && res_2 > 0 && res_3 > 0)
        return (true);
    else if (res_1 < 0 && res_2 < 0 && res_3 < 0)
        return (true);
    return (false);
}