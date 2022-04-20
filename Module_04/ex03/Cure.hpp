/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:35:19 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/05 18:14:51 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_H__
#define __CURE_H__

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	virtual ~Cure(void);
	Cure(const Cure&);
	Cure &operator=(const Cure&);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
