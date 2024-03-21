/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:41:26 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/21 10:48:51 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap    test("Handsome Jack");

	test.attack("Brick");
	test.takeDamage(5);
	test.beRepaired(10);
	test.takeDamage(15);
	test.attack("Brick");
	test.takeDamage(15);
	test.beRepaired(10);
	return (0);
}