/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initContainer.tpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 10:32:47 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/23 10:33:11 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T >
void	initContainer( int &ac, char **av, T &cont )
{
	unsigned int	nb;
	for (int i = 1; i < ac; i++)
	{
		std::string str(av[i]);
		std::istringstream iss(str);
		iss >> nb;
		cont.push_back(nb);
	}
}