/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 05:56:42 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 16:45:52 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_Hitpoints = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy._Name)
{
    *this = copy;
    std::cout << "FragTrap Copy constructor called\n";
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
    std::cout << "FragTrap Assignation operator called" << std::endl;
    _Name = copy._Name;
	_Hitpoints = copy._Hitpoints;
	_Energy_points = copy._Energy_points;
	_Attack_damage = copy._Attack_damage;
    return *this;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	_Hitpoints = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
	return ;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "HIGH FIVE!!!" << std::endl;
	return ;
}