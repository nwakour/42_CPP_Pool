/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:15:17 by nwakour           #+#    #+#             */
/*   Updated: 2021/09/25 18:02:45 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
        Weapon& _Weapon;
        std::string _name;
    public:
        void attack(void);
        HumanA(std::string, Weapon&);
        ~HumanA(void);
};

#endif
