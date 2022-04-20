/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 05:32:19 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 21:48:49 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	_type = "WrongCat";
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
	return ;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "WrongCat Assignation operator called" << std::endl;
	_type = copy._type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "MEEEEOOOOW!!!" << std::endl;
	return ;
}
