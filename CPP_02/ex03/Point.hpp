/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:57:46 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/12 13:56:22 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class   Point
{

    public:

        Point( void );
        Point( const float x, const float y );
        Point( const Point &cpy );
        ~Point();

        Point   &operator=( const Point &var );

        float   get_x( void ) const;
        float   get_y( void ) const;

        const Fixed   &get_fix_x( void ) const;
        const Fixed   &get_fix_y( void ) const;


    private:

        const Fixed x;
        const Fixed y;
};