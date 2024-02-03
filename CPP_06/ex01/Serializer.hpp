/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:24:18 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/03 16:30:06 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include "Data.hpp"

class	Serializer
{

	public:

		static uintptr_t	serialize( Data *ptr );
		static Data			*deserialize( uintptr_t raw );

	private:

		Serializer();
		~Serializer();
};

#endif