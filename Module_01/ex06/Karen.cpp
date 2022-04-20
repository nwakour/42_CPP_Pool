/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:58:13 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/22 21:33:24 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

typedef void (Karen::*func_ptr)(void);

Karen::Karen(void)
{
	std::cout << "HI KAREN" << std::endl;
	return ;
}

Karen::~Karen(void)
{
	std::cout << "BYE KAREN" << std::endl;
	return ;
}

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl
	<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
	<< std::endl << "I just love it!" << std::endl;
	return;
}

void Karen::info( void )
{
	std::cout <<  "[ INFO ]" << std::endl
	<< "I cannot believe adding extra bacon cost more money." << std::endl
	<< "You don’t put enough!" << std::endl << "If you did I would not have to ask for it!"
	<< std::endl;
	return;
}

void Karen::warning( void )
{
	std::cout <<  "[ WARNING ]" << std::endl
	<< "I think I deserve to have some extra bacon for free." << std::endl
	<< "I’ve been coming here for years and you just started working here last month."
	<< std::endl;
	return;
}

void Karen::error( void )
{
	std::cout <<  "[ ERROR ]" << std::endl
	<< "This is unacceptable, I want to speak to the manager now."
	<< std::endl;
	return;
}

void Karen::complain( std::string level )
{
	func_ptr ptr[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string string[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(string[i]))
		{
			(this->*ptr[i])();
			return;
		}
	}
}
