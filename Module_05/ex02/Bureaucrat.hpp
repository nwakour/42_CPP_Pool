/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:42:58 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/22 15:19:29 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
public:
	Bureaucrat(void);
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat&);
	Bureaucrat &operator=(const Bureaucrat&);

	Bureaucrat(std::string, int);
	std::string getName() const;
	int getGrade(void) const;
	void Increment(void);
	void Decrement(void);
	bool signForm(const Form&) const;
	bool executeForm(const Form& form) const;
	class GradeTooHighException : public std::exception{
		public:
			virtual const char * what () const throw ();
	};
	class GradeTooLowException : public std::exception{
		public:
			virtual const char * what () const throw ();
	};
};
std::ostream & operator<< (std::ostream&, Bureaucrat const &);
#endif