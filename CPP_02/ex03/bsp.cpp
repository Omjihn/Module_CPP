/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:58:07 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/15 13:18:38 by gbricot          ###   ########.fr       */
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