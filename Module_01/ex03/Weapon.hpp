/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:04:22 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 16:32:30 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>

class Weapon {
    private:
        std::string _type;
    public:
       std::string const &getType(void) const;
       void setType(std::string);
       Weapon(std::string);
       ~Weapon(void);
};

#endif