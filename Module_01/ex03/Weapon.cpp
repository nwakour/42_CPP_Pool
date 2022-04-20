/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:04:01 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 16:32:35 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    setType(type);
    return;
}

Weapon::~Weapon(void)
{
    return;
}

std::string const &Weapon::getType(void) const
{
    return(_type);
}

void Weapon::setType(std::string type)
{
    _type = type;
    return;
}