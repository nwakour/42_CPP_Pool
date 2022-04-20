/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:41:28 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/22 15:52:21 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default"), _Egrade(1), _Sgrade(1)
{
	std::cout << "Default constructor called" << std::endl;
	_signature = false;
	return ;
}

Form::~Form(void){
	std::cout << "Default destructor called" << std::endl;
	return ;
}

Form::Form(const Form& to_copy) : _name(to_copy._name), _Egrade(to_copy._Egrade), _Sgrade(to_copy._Sgrade)
{
	std::cout << "copy constructor called" << std::endl;
	*this = to_copy;
}

Form &Form::operator=(const Form& to_copy)
{
	std::cout << "assignement operator called" << std::endl;
	_signature = to_copy._signature;
	return (*this);
}

Form::Form(std::string name, int Egrade, int Sgrade) : _name(name), _Egrade(Egrade), _Sgrade(Sgrade)
{
	std::cout << "Constructor called" << std::endl;
	if (Egrade < 1 || Sgrade < 1){
		throw Bureaucrat::GradeTooHighException();
	}
	else if (Egrade > 150 || Sgrade > 150){
		throw Bureaucrat::GradeTooLowException();
	}
	_signature = false;
	return ;
}

int Form::get_Egrade(void) const
{
	return (_Egrade);
}

int Form::get_Sgrade(void) const
{
	return (_Sgrade);
}

bool Form::is_signed(void) const
{
	return (_signature);
}

std::string Form::get_name(void) const
{
	return (_name);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (!bureaucrat.signForm(*this))
		throw Form::GradeTooLowException();
	else
		_signature = true;
}

const char * Form::GradeTooHighException::what() const throw ()
{
	return "Grade Too High";
}

const char * Form::GradeTooLowException::what() const throw ()
{
	return "Grade Too Low";
}

std::ostream & operator<< (std::ostream& COUT, Form const &form){
	COUT << form.get_name() << " Form to execute = " << form.get_Egrade() << " to sign = " << form.get_Sgrade() << " is ";
	if (form.is_signed() == false)
		COUT << "not ";
	COUT << "signed";
	return COUT;
}
