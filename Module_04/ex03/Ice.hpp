/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:35:21 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/05 18:15:56 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	virtual ~Ice(void);
	Ice(const Ice&);
	Ice &operator=(const Ice&);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif