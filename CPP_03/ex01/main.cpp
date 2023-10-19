/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:41:26 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/19 11:21:02 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    st("Handsome Jack");
    ClapTrap    ct;

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
    return (0);
}