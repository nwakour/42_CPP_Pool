/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:42:56 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/22 16:06:13 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default")
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Default destructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "constructor called" << std::endl;
	if (grade < 1){
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150){
		throw Bureaucrat::GradeTooLowException();
	}
	_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& to_copy) : _name(to_copy._name)
{
	std::cout << "copy constructor called" << std::endl;
	*this = to_copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& to_copy)
{
	std::cout << "assignement operator called" << std::endl;
	_grade = to_copy._grade;
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void Bureaucrat::Increment(void)
{
	if (this->_grade == 1){
		throw Bureaucrat::GradeTooHighException();
	}
	_grade--;
	return ;
}

void Bureaucrat::Decrement(void)
{
	if (this->_grade == 150){
		throw Bureaucrat::GradeTooLowException();
	}
	_grade++;
	return ;
}

bool Bureaucrat::signForm(const Form& form) const
{
	if (_grade > form.get_Sgrade())
	{
		std::cout << _name << " cannot sign " << form.get_name() << " because grade is too low"<< std::endl;
		return (false);
	}
	else
	{
		std::cout << _name << " signs " << form.get_name() << std::endl;
		return (true);
	}
}

bool Bureaucrat::executeForm(const Form& form) const
{
	if (!form.is_signed())
	{
		std::cout << _name << " cannot execute " << form.get_name() << " because it's not signed"<< std::endl;
		return (false);
	}
	else if (_grade > form.get_Egrade())
	{
		std::cout << _name << " cannot execute " << form.get_name() << " because grade is too low"<< std::endl;
		return (false);
	}
	else
	{
		std::cout << _name << " executes " << form.get_name() << std::endl;
		return (true);
	}
}

const char * Bureaucrat::GradeTooHighException::what() const throw ()
{
	return "Grade Too High";
}

const char * Bureaucrat::GradeTooLowException::what() const throw ()
{
	return "Grade Too Low";
}

std::ostream & operator<< (std::ostream& COUT, Bureaucrat const &bureau){
	COUT <<  bureau.getName()  << " Bureaucrat, grade " << bureau.getGrade();
	return (COUT);
}
