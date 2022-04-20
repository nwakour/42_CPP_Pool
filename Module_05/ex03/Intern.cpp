/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:47:57 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/23 17:28:34 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

typedef Form* (*func_ptr)(std::string);

Intern::Intern(void)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Intern::~Intern(void){
	std::cout << "Default destructor called" << std::endl;
	return ;
}

Intern::Intern(const Intern& to_copy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = to_copy;
}

Intern &Intern::operator=(const Intern& to_copy)
{
	std::cout << "assignement operator called" << std::endl;
	(void)to_copy;
	return (*this);
}

Form *Pardon_clone(std::string name)
{
	return (new PresidentialPardonForm(name));
}

Form *Robot_clone(std::string name)
{
	return (new RobotomyRequestForm(name));
}

Form *shrub_clone(std::string name)
{
	return (new ShrubberyCreationForm(name));
}

Form *Intern::makeForm(std::string name, std::string target)
{
	func_ptr ptr[3] = {&Pardon_clone, &Robot_clone, &shrub_clone};
	std::string string[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	for (int i = 0; i < 3; i++)
	{
		if (!name.compare(string[i]))
		{
			return (ptr[i])(target);
		}
	}
	return (NULL);
}