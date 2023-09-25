/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:04:24 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/21 16:04:28 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Contact
{

	public:
	
		void	ft_add_info(int index, std::string info);
		std::string	*ft_get_all_infos( void );
		std::string	ft_get_info(int index);
		
	private:
	
		std::string	infos[5];
};
