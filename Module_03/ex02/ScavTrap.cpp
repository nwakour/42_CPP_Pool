/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 05:30:04 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 17:17:46 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_Hitpoints = 100;
	_Energy_points = 50;
	_Attack_damage = 20;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy._Name)
{
    *this = copy;
    std::cout << "ScavTrap Copy constructor called\n";
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    _Name = copy._Name;
	_Hitpoints = copy._Hitpoints;
	_Energy_points = copy._Energy_points;
	_Attack_damage = copy._Attack_damage;
    return *this;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_Hitpoints = 100;
	_Energy_points = 50;
	_Attack_damage = 20;
	return ;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << _Name
	<< " attack " << target << " causing "
	<< _Attack_damage << " points of damage!";
	if (_Attack_damage <= 0)
		std::cout << " It does nothing...";
	std::cout << std::endl;
	return ;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _Name
	<< " have enterred in Gate keeper mode"
	<< std::endl;
	return ;
}
