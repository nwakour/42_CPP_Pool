/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 15:10:19 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 16:10:15 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

void Zombie::set(std::string name)
{
    _name = name;
    return;
}

std::string Zombie::get(void)  const
{
    return _name;
}
Zombie::Zombie(void)
{
    return;
}
Zombie::Zombie(std::string name)
{
	_name = name;
    return;
}

Zombie::~Zombie(void)
{
    std::cout << _name << " Destroyed" << std::endl;
    return;
}
