/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:25:37 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 16:45:44 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
#define __HUMANB_H__

#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
        Weapon* _Weapon;
        std::string _name;
    public:
        void attack(void);
        void setWeapon(Weapon&);
        HumanB(std::string);
        ~HumanB(void);
};

#endif
