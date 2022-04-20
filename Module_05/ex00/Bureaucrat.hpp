/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:42:58 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/22 15:18:57 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <iostream>

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
	Bureaucrat(void);
public:
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat&);
	Bureaucrat &operator=(const Bureaucrat&);

	Bureaucrat(std::string, int);
	std::string getName() const;
	int getGrade() const;
	void Increment();
	void Decrement();
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