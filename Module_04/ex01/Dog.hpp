/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 05:09:26 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 17:43:12 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal 
{
private:
	Brain *_brain;
public:
	Dog(void);
	virtual ~Dog(void);
	Dog(const Dog&);
	Dog &operator=(const Dog&);

	void makeSound(void) const;
	void show_ideas(void);
};

#endif