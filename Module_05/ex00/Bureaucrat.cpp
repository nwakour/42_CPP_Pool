/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:42:56 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/22 15:10:51 by nwakour          ###   ########.fr       */
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

std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::Increment()
{
	if (this->_grade == 1){
		throw Bureaucrat::GradeTooHighException();
	}
	_grade--;
	return ;
}

void Bureaucrat::Decrement()
{
	if (this->_grade == 150){
		throw Bureaucrat::GradeTooLowException();
	}
	_grade++;
	return ;
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
