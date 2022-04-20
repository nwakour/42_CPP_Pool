/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 04:49:07 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 17:43:00 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
	std::string _type;
public:
	Animal(void);
	virtual ~Animal(void);
	Animal(const Animal&);
	Animal &operator=(const Animal&);

	std::string getType(void) const;
	virtual void makeSound(void) const;
};

#endif