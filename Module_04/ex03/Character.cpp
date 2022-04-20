/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 03:25:30 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 19:53:03 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character default contructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		_inventory[i] = NULL;
	return ;
}

Character::~Character(void)
{
	std::cout << "Character default destuctor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
	return ;
}

Character::Character(const Character &copy)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Character &Character::operator=(const Character &copy)
{
	std::cout << "Character Assignation operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i] != NULL)
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	_name = copy._name;
	return *this;
}

Character::Character(std::string name)
{
	std::cout << "Character contructor called" << std::endl;
	_name = name;
	for (size_t i = 0; i < 4; i++)
		_inventory[i] = NULL;
	return ;
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{	
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return;
		}
	}
	return;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	_inventory[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (_inventory[idx])
	{
		std::cout << _name << " ";
		_inventory[idx]->use(target);
	}
	return ;
}

