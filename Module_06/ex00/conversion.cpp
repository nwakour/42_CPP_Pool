/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:21:17 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/23 18:05:04 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

void conv(std::string s)
{
	if (s.find('f') != std::string::npos && s.find('.') != std::string::npos)
	{
		float f;
		try
		{
			f = std::stof(s);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
			return ;
		}
		FloatConv(f);
	}
	else if (s.find('.') != std::string::npos || !s.compare("nan"))
	{
		double d;
		try
		{
			d = std::stod(s);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
			return ;
		}
		DoubleConv(d);
	}
	else
	{
		int i;
		try
		{
			i = std::stoi(s);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
			return ;
		}
		IntConv(i);
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "One argument needed!" << std::endl;
		return (1);
	}
	conv(argv[1]);
	return (0);
}
