/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:40:47 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 15:47:57 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "contact.class.hpp"

class phonebook
{
private:
	contact _contact[8];
	int _nb_of_contact;
	int _max;
	void	_fetch_contact(void);
public:
	phonebook(void);
	void	fetch_phone(void);
	void	add_phone(void);
	~phonebook(void);
};

#endif