/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 03:15:58 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 18:03:43 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string _type;
public:
	AMateria(void);
	virtual ~AMateria(void);
	AMateria(const AMateria&);
	AMateria &operator=(const AMateria&);
	
	AMateria(std::string const & type);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
