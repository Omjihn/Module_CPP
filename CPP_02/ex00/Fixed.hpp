/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:06:39 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/02 14:46:46 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Fixed
{
    public:

        Fixed( void );
        Fixed( Fixed &val );
        Fixed &operator=(Fixed &val);
        ~Fixed();
        int getRawBits( void ) const;
        void    setRawBits( int const raw );

    private:

        int                 fix_val;
        static const int    fract_bit_nb = 8;

};