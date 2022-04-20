/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 05:54:36 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 16:46:06 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(const FragTrap&);
    FragTrap &operator=(FragTrap const &);

	FragTrap(std::string);
	void highFivesGuys(void);
};

#endif