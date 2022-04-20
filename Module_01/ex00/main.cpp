/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 15:55:31 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 16:06:04 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *new_Zombie;
	
	new_Zombie = newZombie("JEE");
	new_Zombie->announce();
	randomChump("JAA");
	delete new_Zombie;
	return (0);
}
