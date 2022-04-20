/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 06:05:03 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 16:45:38 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _Name;
public:
	DiamondTrap(void);
	~DiamondTrap(void);
	DiamondTrap(const DiamondTrap&);
    DiamondTrap &operator=(DiamondTrap const &);

	DiamondTrap(std::string);
	void attack(std::string const & target);
	void whoAmI(void);
};

#endif