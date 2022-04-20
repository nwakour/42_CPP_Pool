/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 05:20:40 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 17:18:53 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap ScavTrap("James");
	
	ScavTrap.display_info();
	ScavTrap.attack("Ash");
	ScavTrap.takeDamage(7);
	ScavTrap.beRepaired(10);
	ScavTrap.takeDamage(100);
	ScavTrap.takeDamage(7);
	ScavTrap.beRepaired(100);
	ScavTrap.guardGate();
	ScavTrap.display_info();
	return(0);
}
