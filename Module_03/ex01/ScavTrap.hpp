/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 05:26:03 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 16:42:27 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(const ScavTrap&);
    ScavTrap &operator=(ScavTrap const &);

	ScavTrap(std::string);
	void attack(std::string const & target);
	void guardGate(void);
};

#endif