/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:37:40 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/23 17:48:13 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
#define __FORM_H__

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string _name;
	const int _Egrade;
	const int _Sgrade;
	bool _signature;
	Form(void);
public:
	
	virtual ~Form(void);
	Form(const Form&);
	Form &operator=(const Form&);

	Form(std::string, int, int);
	std::string get_name(void) const;
	int get_Sgrade(void) const;
	int get_Egrade(void) const;
	bool is_signed(void) const;
	void beSigned(const Bureaucrat&);
	virtual void execute(Bureaucrat const & executor) const = 0;
	class GradeTooHighException : public std::exception{
		public:
			virtual const char * what () const throw ();
	};
	class GradeTooLowException : public std::exception{
		public:
			virtual const char * what () const throw ();
	};
};
std::ostream & operator<< (std::ostream&, Form const &);
#endif