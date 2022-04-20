/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:35:16 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/05 19:57:20 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Cure default contructor called" << std::endl;
	_type = "cure";
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Cure default destructor called" << std::endl;
	return ;
}

Cure::Cure(const Cure &copy)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Cure &Cure::operator=(const Cure &copy)
{
	std::cout << "Cure Assignation operator called" << std::endl;
	_type = copy._type;
	return *this;
}

void Cure::use(ICharacter& target)
{
	std::cout << "heals "<< target.getName()<< "’s wounds" << std::endl;
	return ;
}

AMateria* Cure::clone() const
{
	AMateria *cure = new Cure();
	return (cure);
}
