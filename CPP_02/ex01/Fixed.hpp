/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:05:49 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/02 15:58:07 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Fixed
{
    public:

        Fixed( void );
        Fixed( const int val );
        Fixed( Fixed &val );
        Fixed &operator=(Fixed &val);
        ~Fixed();
        float   toFloat( void ) const
        int getRawBits( void ) const;
        void    setRawBits( int const raw );

    private:

        float                 fix_val;
        static const int    fract_bit_nb = 8;

};