/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:13:05 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 15:32:59 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

contact::contact(void)
{
	std::cout << "Constructor Called" << std::endl;
	return;
}

contact::~contact(void)
{
	std::cout << "Destructor Called" << std::endl;
	return;
}

void	contact::make_contact(void)
{
	std::cout << "first name :";
	std::getline(std::cin, this->_first_name, '\n');
	if (std::cin.eof())
		return ;
	std::cout << "last name :";
	std::getline(std::cin, this->_last_name, '\n');
	if (std::cin.eof())
		return ;
	std::cout << "nickname :";
	std::getline(std::cin, this->_nickname, '\n');
	if (std::cin.eof())
		return ;
	std::cout << "phone number :";
	std::getline(std::cin, this->_phone_number, '\n');
	if (std::cin.eof())
		return ;
	std::cout << "darkest secret :";
	std::getline(std::cin, this->_darkest_secret, '\n');
	if (std::cin.eof())
		return ;
	return;
}

void	contact::print_contact(void)
{
	std::cout << this->_first_name << std::endl;
	std::cout << this->_last_name << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phone_number << std::endl;
	std::cout << this->_darkest_secret << std::endl;
}

void contact::_format(std::string s){

	int len;

	std::cout << "|";
	len = s.length();
	if (len > 10)
	{
		std::cout << std::setfill('.');
		len = 9;
	}
	std::cout << std::left << std::setw(10) << s.substr(0, len);
	std::cout << std::setfill(' ');
}

void	contact::show_contact(void)
{
	_format(_first_name);
	_format(_last_name);
	_format(_nickname);
}
