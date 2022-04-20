/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:35:23 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/05 19:57:27 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout << "Ice default contructor called" << std::endl;
	_type = "ice";
	return ;
}

Ice::~Ice(void)
{
	std::cout << "Ice default destructor called" << std::endl;
	return ;
}

Ice::Ice(const Ice &copy)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Ice &Ice::operator=(const Ice &copy)
{
	std::cout << "Ice Assignation operator called" << std::endl;
	_type = copy._type;
	return *this;
}

void Ice::use(ICharacter& target)
{
	std::cout << "shoots an ice bolt at "<< target.getName() << std::endl;
	return ;
}

AMateria* Ice::clone() const
{
	AMateria *ice = new Ice();
	return (ice);
}
