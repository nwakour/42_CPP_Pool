/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 05:05:49 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 17:21:53 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	_Hitpoints = 10;
	_Energy_points = 10;
	_Attack_damage = 0;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &copy) 
{
    *this = copy;
    std::cout << "ClapTrap Copy constructor called" << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    _Name = copy._Name;
	_Hitpoints = copy._Hitpoints;
	_Energy_points = copy._Energy_points;
	_Attack_damage = copy._Attack_damage;
    return *this;
}

ClapTrap::ClapTrap(std::string name): _Name(name)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	_Hitpoints = 10;
	_Energy_points = 10;
	_Attack_damage = 0;
	return ;
}

void ClapTrap::display_info(void)
{
	std::cout << "Name = " << _Name << std::endl;
	std::cout << "Hitpoints = " << _Hitpoints << std::endl;
	std::cout << "Energy points = " << _Energy_points << std::endl;
	std::cout << "Attack damage = " << _Attack_damage << std::endl;
	return;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _Name
	<< " attack " << target << " causing "
	<< _Attack_damage << " points of damage!";
	if (_Attack_damage <= 0)
		std::cout << " It does nothing...";
	std::cout << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_Hitpoints <= 0)
		std::cout << "You are kicking a dead corps...";
	else
	{
		std::cout << "ClapTrap " << _Name
		<< " took " << amount << " points of damage!";
		_Hitpoints -= amount;
		if (_Hitpoints <= 0)
			std::cout << " HE DIED...";
	}
	std::cout << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _Name
	<< " is healing for " << amount << " points!";
	if (_Hitpoints <= 0)
		std::cout << " HE LIVES!!!";
	std::cout << std::endl;
	_Hitpoints += amount;
	return ;
}
