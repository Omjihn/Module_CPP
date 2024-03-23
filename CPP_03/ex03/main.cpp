/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:41:26 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/21 12:07:04 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"




int main(void)
{
	std::cout << "-------------------------------------" << std::endl;
	DiamondTrap    ft("Sirene");
	std::cout << "-------------------------------------" << std::endl;
	ScavTrap    st("Handsome Jack");
	std::cout << "-------------------------------------" << std::endl;
	ClapTrap    ct;
	std::cout << "-------------------------------------" << std::endl;
	FragTrap    dumb("Brick");
	std::cout << "-------------------------------------" << std::endl;

	ft.whoAmI();
	ft.highFivesGuys();
	while (ct.ft_get_energy_point() - 2)
		ct.beRepaired(3);
	ct.attack(st.ft_get_name());
	st.takeDamage(ct.ft_get_attack_dmg());
	st.guardGate();
	st.attack(ct.ft_get_name());
	ct.takeDamage(st.ft_get_attack_dmg());
	ct.beRepaired(3);
	st.attack(ct.ft_get_name());
	ct.takeDamage(st.ft_get_attack_dmg());
	st.beRepaired(69);
	ft.guardGate();
	std::cout << ft.ft_get_name() << " has " << ft.ft_get_energy_point() << " energy points" << std::endl;
	while (ft.ft_get_hit_point())
	{
		ft.attack(st.ft_get_name());
		st.takeDamage(ft.ft_get_attack_dmg());
		st.attack(ft.ft_get_name_diamond());
		ft.takeDamage(st.ft_get_attack_dmg());
	}
	ft.highFivesGuys();
	ct.attack(st.ft_get_name());
	st.beRepaired(42);
	dumb.attack(dumb.ft_get_name());
	dumb.takeDamage(dumb.ft_get_attack_dmg());
	return (0);
}