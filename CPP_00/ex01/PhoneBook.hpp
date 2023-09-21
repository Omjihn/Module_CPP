/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:04:43 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/21 16:04:44 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

class	PhoneBook
{
	public:

		PhoneBook(void);
		~PhoneBook(void);

		void    ft_add(void);
		void	ft_search(void);

	private:

		Contact		data[8];
		int		i;
		int		nb_data;
};
