/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:16:35 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/22 16:37:10 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Pardon",25,5)
{
	std::cout << "Default construtor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target,25,5)
{
	std::cout << "Construtor called" << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& to_copy): Form(to_copy)
{
	std::cout << "copy constructor called" << std::endl;
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm&)
{
	std::cout << "assignement operator called" << std::endl;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!executor.executeForm(*this))
		throw Form::GradeTooLowException();
	std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	return ;
}
