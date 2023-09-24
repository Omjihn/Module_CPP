/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:45:21 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/24 16:45:25 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie* res = new Zombie[N];
    int i = 0;
    while (i < N)
        new (&res[i++]) Zombie(name);
    return (res);
}
