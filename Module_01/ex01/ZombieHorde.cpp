/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:05:03 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 16:23:28 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* new_Horde = new Zombie[N];

    for (int i = 0; i < N; i++)
		new_Horde[i].set(name);
    return (new_Horde);
}