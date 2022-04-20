/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 05:29:53 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 17:28:18 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
	return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	_type = copy._type;
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound" << std::endl;
	return ;
}
