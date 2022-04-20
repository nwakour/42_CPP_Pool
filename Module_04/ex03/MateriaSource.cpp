/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 03:25:11 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 19:54:39 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default contructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		_memory[i] = NULL;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource default destructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (_memory[i] != NULL)
			delete _memory[i];
	}
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = copy;
	return ;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	std::cout << "MateriaSource Assignation operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_memory[i] != NULL)
		{
			delete _memory[i];
			_memory[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (copy._memory[i] != NULL)
			_memory[i] = copy._memory[i]->clone();
		else
			_memory[i] = NULL;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* mat)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_memory[i] == NULL)
		{
			_memory[i] = mat;
			return ;
		}
	}
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_memory[i] != NULL && type.compare(_memory[i]->getType()) == 0)
			return (_memory[i]->clone());
	}
	return (NULL);
}
