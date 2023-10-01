/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:06:39 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/01 15:12:18 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class   Fixed
{
    public:

        Fixed( void );
        Fixed( int val );
        ~Fixed();
        int getRawBits( void ) const;
        void    setRawBits( int const raw );

    private:

        int fix-val;
        static const int    fract_bit_nb = 0;

};