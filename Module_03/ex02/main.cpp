/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 05:20:40 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 17:22:45 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap FragTrap("James");
	
	FragTrap.display_info();
	FragTrap.attack("Ash");
	FragTrap.takeDamage(7);
	FragTrap.beRepaired(10);
	FragTrap.takeDamage(100);
	FragTrap.takeDamage(7);
	FragTrap.beRepaired(100);
	FragTrap.highFivesGuys();
	FragTrap.display_info();
	return(0);
}
