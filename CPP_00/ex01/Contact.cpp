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

void	Contact::ft_add_info(int index, std::string info)
{
	this->infos[index].assign(info);
}

std::string	Contact::ft_get_info(int index)
{
	return (this->infos[index]);
}

std::string	*Contact::ft_get_all_infos(void)
{
	return (this->infos);
}
