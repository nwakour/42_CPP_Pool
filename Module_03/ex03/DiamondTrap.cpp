/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 06:05:05 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 16:45:18 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap defautl constructor called" << std::endl;
	_Hitpoints = FragTrap::_Hitpoints;
    _Energy_points = ScavTrap::_Energy_points;
    _Attack_damage = FragTrap::_Attack_damage;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) : FragTrap(copy) , ScavTrap(copy)
{
    std::cout << "DiamondTrap Copy constructor called"<< std::endl;
    *this = copy;
	return ;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &copy)
{
    std::cout << "DiamondTrap Assignation operator called" << std::endl;
    _Name = copy._Name;
	_Hitpoints = copy._Hitpoints;
	_Energy_points = copy._Energy_points;
	_Attack_damage = copy._Attack_damage;
    return *this;
}

DiamondTrap::DiamondTrap(std::string name) :ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	_Name = name;
    _Hitpoints = FragTrap::_Hitpoints;
    _Energy_points = ScavTrap::_Energy_points;
    _Attack_damage = FragTrap::_Attack_damage;
	return ;
}

void    DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
	return ;
}

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond name = " << _Name
	<< " Clap name = " << ClapTrap::_Name
	<< std::endl;
	return ;
}
