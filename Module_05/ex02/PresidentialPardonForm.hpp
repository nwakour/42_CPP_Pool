/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:15:40 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/22 15:44:22 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm(void);
	public:
		PresidentialPardonForm(std::string);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm &operator=(const PresidentialPardonForm&);
		
		void execute(Bureaucrat const & executor) const;
};

#endif
