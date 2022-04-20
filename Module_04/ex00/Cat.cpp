/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 05:06:49 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 21:48:42 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	_type = copy._type;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "MEEEEOOOOW!!!" << std::endl;
	return ;
}
