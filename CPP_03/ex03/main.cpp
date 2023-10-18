/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:41:26 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/18 19:04:35 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main(void)
{
    DiamondTrap    ft("Sirene");
    ScavTrap    st("Etalon du cul");
    ClapTrap    ct;

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
    while (ft.ft_get_hit_point())
    {
        ft.attack(st.ft_get_name());
        st.takeDamage(st.ft_get_attack_dmg());
        st.attack(ft.ft_get_name());
        ft.takeDamage(ft.ft_get_attack_dmg());
    }
    ft.highFivesGuys();
    ct.attack(st.ft_get_name());
    st.beRepaired(42);
    return (0);
}