/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:05:49 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/11 16:27:19 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class   Fixed
{
    public:

        Fixed( void );
        Fixed( const float val );
        Fixed( const int val );
        Fixed( const Fixed &val );
        ~Fixed();

        Fixed &operator=( const Fixed &val );

        float   toFloat( void ) const;
        int     toInt( void ) const;

        friend std::ostream &operator<<( std::ostream &output, const Fixed &val );

    private:

        int                 fix_val;
        static const int    fract_bit_nb = 8;

};