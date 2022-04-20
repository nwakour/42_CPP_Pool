/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:26:31 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/23 17:28:42 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_H__
#define __INTERN_H__

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;
class Intern
{

	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern&);
		Intern &operator=(const Intern&);

		Form *makeForm(std::string, std::string);
};

#endif