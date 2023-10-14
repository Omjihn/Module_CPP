/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:56:41 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/14 18:48:16 by gbricot          ###   ########.fr       */
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
        
        friend std::ostream & operator<<( std::ostream &output, const Fixed &val );

        bool    operator>( const Fixed &val ) const;
        bool    operator<( const Fixed &val ) const;
        bool    operator>=( const Fixed &val ) const;
        bool    operator<=( const Fixed &val ) const;
        bool    operator==( const Fixed &val ) const;
        bool    operator!=( const Fixed &val ) const;

        Fixed   operator*( const Fixed &val ) const;
        Fixed   operator+( const Fixed &val ) const;
        Fixed   operator-( const Fixed &val ) const;
        Fixed   operator/( const Fixed &val ) const;

        float   operator++(int);
        float   operator++();
        float   operator--(int);
        float   operator--();

        static const Fixed   &min(const Fixed &arg_1, const Fixed &arg_2);
        static const Fixed   &max(const Fixed &arg_1, const Fixed &arg_2);

        static Fixed   &min(Fixed &arg_1, Fixed &arg_2);
        static Fixed   &max(Fixed &arg_1, Fixed &arg_2);


        float   toFloat( void ) const;
        int     toInt( void ) const;

    private:

        int                 fix_val;
        static const int    fract_bit_nb = 8;

};