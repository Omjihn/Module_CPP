/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:35:55 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/24 18:17:29 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	ft_add_info(int index, std::string info)
{
	infos[index].assign(info);
}

std::string	ft_get_info(int index)
{
	if (infos[index])
		return (infos[index]);
	return (NULL);
}

std::string	*ft_get_all_infos(void)
{
	return (infos);
}
