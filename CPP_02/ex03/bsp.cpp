/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:58:07 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/12 18:04:06 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool    bsp( Point const &a, Point const &b, Point const &c, Point const &p )
{
    Fixed   ABC(roundf(0.5 * (a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y()))));
    Fixed   PAB(roundf(0.5 * (p.get_x() * (a.get_y() - b.get_y()) + a.get_x() * (b.get_y() - p.get_y()) + b.get_x() * (p.get_y() - a.get_y()))));
    Fixed   PBC(roundf(0.5 * (p.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - p.get_y()) + c.get_x() * (p.get_y() - b.get_y()))));
    Fixed   PCA(roundf(0.5 * (p.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - p.get_y()) + a.get_x() * (p.get_y() - c.get_y()))));
    
    Fixed u(PBC/ABC);
    Fixed v(PCA/ABC);
    Fixed w(PAB/ABC);

    std::cout << "u = " << u.toFloat() << std::endl;
    std::cout << "v = " << v.toFloat() << std::endl;
    std::cout << "w = " << w.toFloat() << std::endl;
    std::cout << "u + v + w = " << u.toFloat() + v.toFloat() + w.toFloat() << std::endl;
    if ((u.toFloat() + v.toFloat() + w.toFloat()) == 1)
        return (true);
    return (false);
}