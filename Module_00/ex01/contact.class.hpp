/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:14:11 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 14:58:25 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <iomanip>


class contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
	void _format(std::string);
public:
	contact(void);
	void make_contact(void);
	void print_contact(void);
	void show_contact(void);
	~contact(void);
};

#endif