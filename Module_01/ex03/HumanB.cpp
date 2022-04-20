/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:25:13 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 16:45:35 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
    _Weapon = NULL;
    return;
}

HumanB::~HumanB(void)
{
    return;
}

void HumanB::attack(void)
{
    std::cout << _name << " attacks with his " << _Weapon->getType() << std::endl;
    return;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _Weapon = &weapon;
    return ;
}
