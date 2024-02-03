/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:02:24 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/03 16:47:02 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int	main(void)
{
	Data	val("Salut c'est moi");
	Data	empty;

	uintptr_t raw = Serializer::serialize(&val);

	Data	*recovery = Serializer::deserialize(raw);
	std::cout << "Recovered string = " << recovery->getString() << std::endl;

	empty = *Serializer::deserialize(raw);

	std::cout << "Empty is now equal to val, string = " << empty.getString() << std::endl;

	Data	*data = new Data("Bonsoir a vous");

	intptr_t raw_data = Serializer::serialize(data);

	Data	*cpy_data = Serializer::deserialize(raw_data);

	std::cout << "Cpy_data string = " << cpy_data->getString() << std::endl;
	delete cpy_data;
	//std::cout << "data string = " << data->getString() << std::endl; // Memory error this pointer has been freed
	return (0);
}