/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:57:46 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/11 19:06:23 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class   Point
{

    public:

        Point();
        Point( const float x, const float y );
        Point( const Point &cpy );
        ~Point();
    
    private:

        const Fixed x;
        const Fixed y;
};