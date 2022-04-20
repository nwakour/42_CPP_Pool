/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 15:55:31 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 16:23:51 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *Zombies;
    int     N(5);

    Zombies = zombieHorde(N, "JEEE");
    for (int i = 0; i < N; i++)
       Zombies[i].announce();
    delete [] Zombies;   
    return (0);
}
