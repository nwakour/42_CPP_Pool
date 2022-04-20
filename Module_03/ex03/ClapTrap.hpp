/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 04:59:51 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 16:59:07 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>

class ClapTrap
{
protected:
	std::string _Name;
	int	_Hitpoints;
	int _Energy_points;
	int	_Attack_damage;
public:
	ClapTrap(void);
	~ClapTrap(void);
	ClapTrap(ClapTrap const &);
    ClapTrap &operator=(ClapTrap const &);

	ClapTrap(std::string);
	void display_info();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif