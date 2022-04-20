/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:12:41 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/22 16:37:12 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("shrubbery",145,137)
{
	std::cout << "Default construtor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target,145,137)
{
	std::cout << "Construtor called" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& to_copy): Form(to_copy)
{
	std::cout << "copy constructor called" << std::endl;
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm&)
{
	std::cout << "assignement operator called" << std::endl;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream dist;
	
	if (!executor.executeForm(*this))
		throw Form::GradeTooLowException();
	dist.open(executor.getName() + "_shrubbery");
	if (dist.fail())
		return ;
	dist << "       ###\n      #o###\n    #####o###\n   #o#\\#|#/###\n    ###\\|/#o#\n     # }|{  #\n       }|{\n";
	dist.close();
	return ;
}
