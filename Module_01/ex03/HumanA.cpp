/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:14:31 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 16:33:39 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _Weapon(weapon), _name(name)
{
    return;
}


HumanA::~HumanA(void)
{
    return;
}

void HumanA::attack(void)
{
    std::cout << _name << " attacks with his " << _Weapon.getType() << std::endl;
    return;
}
