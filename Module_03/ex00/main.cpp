/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 05:20:40 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 17:18:15 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("James");

	clapTrap.display_info();
	clapTrap.attack("Ash");
	clapTrap.takeDamage(7);
	clapTrap.beRepaired(10);
	clapTrap.takeDamage(50);
	clapTrap.takeDamage(7);
	clapTrap.beRepaired(50);
	clapTrap.display_info();
	
	return(0);
}
