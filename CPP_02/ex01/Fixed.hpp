/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:05:49 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/03 15:00:41 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Fixed
{
    public:

        Fixed( void );
        Fixed( const float val );
        Fixed( const int val );
        Fixed( const Fixed &val );
        Fixed operator=( Fixed val );
        ~Fixed();
        float   toFloat( void ) const;
        int     toInt( void ) const;

    private:

        float                 fix_val;
        static const int    fract_bit_nb = 8;

};