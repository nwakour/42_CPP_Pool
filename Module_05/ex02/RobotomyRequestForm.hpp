/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:08:07 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/22 15:45:26 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm(void);
	public:
		RobotomyRequestForm(std::string);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm&);
		RobotomyRequestForm &operator=(const RobotomyRequestForm&);
		
		void execute(Bureaucrat const & executor) const;
};

#endif
