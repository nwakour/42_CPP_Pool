/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 05:28:47 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 16:01:58 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal(void);
	~WrongAnimal(void);
	WrongAnimal(const WrongAnimal&);
	WrongAnimal &operator=(const WrongAnimal&);

	std::string getType(void) const;
	void makeSound(void) const;
};

#endif