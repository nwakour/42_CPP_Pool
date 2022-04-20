/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 03:17:24 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 18:33:40 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
protected:
	AMateria *_inventory[4];
	std::string _name;
public:
	Character(void);
	~Character(void);
	Character(const Character&);
	Character &operator=(const Character&);

	Character(std::string);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif