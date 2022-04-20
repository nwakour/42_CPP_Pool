/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 03:25:50 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 20:29:22 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria default contructor called" << std::endl;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria default destructor called" << std::endl;
	return ;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
	return ;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	std::cout << "AMateria Assignation operator called" << std::endl;
	_type = copy._type;
	return *this;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria contructor called" << std::endl;
	_type = type;
	return ;
}

std::string const & AMateria::getType() const
{
	// std::cout << "AMateria get type called" << std::endl;
	return _type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "use material on "<< target.getName() << std::endl;
	return ;
}
