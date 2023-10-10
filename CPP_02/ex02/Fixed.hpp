/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:22:23 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/10 17:47:18 by gbricot          ###   ########.fr       */
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
        
        Fixed &operator=( const Fixed &val );
        
        bool    operator>( const Fixed &val );
        bool    operator<( const Fixed &val );
        bool    operator>=( const Fixed &val );
        bool    operator<=( const Fixed &val );
        bool    operator==( const Fixed &val );
        bool    operator!=( const Fixed &val );
        
        float   operator*( const Fixed &val );
        float   operator+( const Fixed &val );
        float   operator-( const Fixed &val );
        float   operator/( const Fixed &val );

        float   operator++(int);
        float   operator++();
        float   operator--(int);
        float   operator--();

        static Fixed   &min(const Fixed &arg_1, const Fixed &arg_2);
        static Fixed   &max(const Fixed &arg_1, const Fixed &arg_2);

        static float   &min(float &arg_1, float &arg_2);
        static float   &max(float &arg_1, float &arg_2);
        
        //std::ostream &operator<<( Fixed &val);
        ~Fixed();
        float   toFloat( void ) const;
        int     toInt( void ) const;

    private:

        float               fix_val;
        static const int    fract_bit_nb = 8;

};