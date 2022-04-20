/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 05:30:29 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 22:58:43 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(2, *bob);
	me->use(2, *bob);
	me->equip(tmp);
	me->use(2, *bob);
	me->unequip(2);
	me->use(2, *bob);
	me->use(2, *bob);
	me->use(2, *bob);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	bob->use(0, *me);
	delete src;
	me->use(0, *bob);
	bob->use(0, *me);
	delete me;
	me = new Character("me");
	bob->use(0, *me);
	bob->equip(0);
	
	delete bob;
	delete me;
	return 0;
}