/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 05:31:06 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 16:02:05 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
public:
	WrongCat(void);
	~WrongCat(void);
	WrongCat(const WrongCat&);
	WrongCat &operator=(const WrongCat&);

	void makeSound(void) const;
};

#endif