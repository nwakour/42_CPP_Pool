/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 05:10:22 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 21:48:16 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
	return ;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	_type = copy._type;
	_brain = new Brain;
	*(_brain) = *(copy._brain);
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "WOF! WOF! WOF!" << std::endl;
	return ;
}

void Dog::show_ideas(void)
{
	_brain->show_ideas();
	return ;
}
