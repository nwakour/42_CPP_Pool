/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:47:36 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 18:09:36 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

phonebook::phonebook(void)
{
	std::cout << "Constructor Called" << std::endl;
	this->_nb_of_contact = 0;
	this->_max = 0;
	return;
}

phonebook::~phonebook(void)
{
	std::cout << "Destructor Called" << std::endl;
	return;
}

void phonebook::add_phone(void)
{
	if (this->_nb_of_contact > 7)
		this->_nb_of_contact = 0;
	this->_contact[this->_nb_of_contact++].make_contact();
	if(this->_max < 8)
		this->_max++;
	return;
}

void phonebook::_fetch_contact(void)
{
	std::string buff;
	int id;

	std::cout << "Choose an index to get full information :";
	std::getline(std::cin , buff, '\n');
	if (std::cin.eof())
		return ;
	if (buff.length() != 1 || !isdigit(buff[0]))
		std::cout << "Incorrect Index" << std::endl;
	else
	{
		id = stoi(buff);
		if (id > this->_max || id < 1)
			std::cout << "Incorrect Index" << std::endl;
		else
			this->_contact[id - 1].print_contact();
	}
}

void phonebook::fetch_phone(void)
{
	int i;

	std::cout << "fetch_phone Called" << std::endl;
	i = -1;
	std::cout << "|";
	std::cout << std::left << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::left << std::setw(10) << "First Name";
	std::cout << "|";
	std::cout << std::left << std::setw(10) << "Last Name";
	std::cout << "|";
	std::cout << std::left << std::setw(10) << "Nickname";
	std::cout << "|" << std::endl;
	while (++i < this->_max)
	{
		std::cout << "|";
		std::cout << std::setfill(' ') << std::left << std::setw(10) << i + 1;
		this->_contact[i].show_contact();
		std::cout << "|" << std::endl;
	}
	if (i > 0)
		this->_fetch_contact();
	else
		std::cout << "No contact available" << std::endl;
	return;
}
