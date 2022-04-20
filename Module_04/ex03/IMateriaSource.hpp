/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:49:43 by nwakour           #+#    #+#             */
/*   Updated: 2021/10/18 15:15:47 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIASOURCE_H__
#define __IMATERIASOURCE_H__

#include <iostream>

class AMateria;

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
