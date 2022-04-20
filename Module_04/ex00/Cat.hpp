/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 05:05:06 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 22:19:17 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal 
{
public:
	Cat(void);
	virtual ~Cat(void);
	Cat(const Cat&);
	Cat &operator=(const Cat&);

	void makeSound(void) const;
};

#endif