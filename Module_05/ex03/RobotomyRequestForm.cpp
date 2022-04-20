/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:09:13 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/23 17:40:05 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Roboto",72,45)
{
	std::cout << "Default Constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target,72,45)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Default Destructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& to_copy): Form(to_copy)
{
	std::cout << "copy constructor called" << std::endl;
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm&)
{
	std::cout << "assignement operator called" << std::endl;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!executor.executeForm(*this))
		throw Form::GradeTooLowException();
	if (std::rand() % 2)
		std::cout << executor.getName() << " has been robotomized successfully" << std::endl;
	else
		std::cout << executor.getName() << "'s robotomization has failed" << std::endl;
	return ;
}
