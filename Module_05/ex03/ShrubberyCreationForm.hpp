/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:09:48 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/23 17:47:02 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__

#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm(void);
	public:
		ShrubberyCreationForm(std::string);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm&);
		
		void execute(Bureaucrat const & executor) const;
};

#endif
