/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 03:21:47 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 18:45:01 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_memory[4];
public:
	MateriaSource(void);
	~MateriaSource(void);
	MateriaSource(const MateriaSource&);
	MateriaSource &operator=(const MateriaSource&);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif
