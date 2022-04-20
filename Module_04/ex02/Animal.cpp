/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 04:58:10 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 17:29:50 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
	_type = "animal";
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Animal &Animal::operator=(const Animal &copy)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	_type = copy._type;
	return *this;
}

std::string Animal::getType(void) const
{
	return (_type);
}
