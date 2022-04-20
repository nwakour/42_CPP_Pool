/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 05:09:26 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 22:19:20 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal 
{
public:
	Dog(void);
	virtual ~Dog(void);
	Dog(const Dog&);
	Dog &operator=(const Dog&);

	void makeSound(void) const;
};

#endif