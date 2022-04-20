/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntConv.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:00:28 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/13 17:06:33 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

static void IntToChar(int &i)
{
	std::cout << "char: ";
	if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max())
		std::cout <<  "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(i);
		if (std::isprint(c))
			std::cout <<  c << std::endl;
		else
			std::cout <<  "Non displayable" << std::endl;
	}
}

static void IntToFloat(int &i)
{
	std::cout << "float: ";
	if (i < (std::numeric_limits<float>::max() * -1) || i > std::numeric_limits<float>::max())
		std::cout <<  "impossible" << std::endl;
	else
	{
		float f = static_cast<float>(i);
		std::cout <<  f << ".0f" << std::endl;
	}
}

static void IntToDouble(int &i)
{
	std::cout << "double: ";
	if (i < (std::numeric_limits<double>::max() * -1) || i > std::numeric_limits<double>::max())
		std::cout <<  "impossible" << std::endl;
	else
	{
		double d = static_cast<double>(i);
		std::cout <<  d << ".0" << std::endl;
	}
}

void IntConv(int &i)
{
	IntToChar(i);
	std::cout << "int: " << i << std::endl;
	IntToFloat(i);
	IntToDouble(i);
}
