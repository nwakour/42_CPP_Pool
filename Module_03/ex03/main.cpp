/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 05:20:40 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 17:32:46 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap DiamondTrap("James");

	DiamondTrap.display_info();
	DiamondTrap.attack("Ash");
	DiamondTrap.takeDamage(7);
	DiamondTrap.beRepaired(10);
	DiamondTrap.takeDamage(150);
	DiamondTrap.takeDamage(7);
	DiamondTrap.beRepaired(150);
	DiamondTrap.highFivesGuys();
	DiamondTrap.guardGate();
	DiamondTrap.whoAmI();
	DiamondTrap.display_info();
	return(0);
}
