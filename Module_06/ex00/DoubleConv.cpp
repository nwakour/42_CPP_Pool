/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DoubleConv.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:20:29 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/23 18:09:39 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

static void DoubleToChar(double d)
{
	std::cout << "char: ";
	if (isnan(d) || d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
		std::cout <<  "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(d);
		if (std::isprint(c))
			std::cout <<  c << std::endl;
		else
			std::cout <<  "Non displayable" << std::endl;
	}
}

static void DoubleToInt(double d)
{
	std::cout << "int: ";
	if (isnan(d) ||d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
		std::cout <<  "impossible" << std::endl;
	else
	{
		int i = static_cast<int>(d);
		std::cout <<  i << std::endl;
	}
}

static void DoubleToFloat(double d)
{
	std::cout << "float: ";
	if (d < (std::numeric_limits<float>::max() * -1) || d > std::numeric_limits<float>::max())
		std::cout <<  "impossible" << std::endl;
	else
	{
		float f = static_cast<float>(d);
		std::cout <<  f;
		if (std::floorf(f) == std::ceilf(f))
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void DoubleConv(double &d)
{
	DoubleToChar(d);
	DoubleToInt(d);
	DoubleToFloat(d);
	std::cout << "double: " << d;
	if (std::floor(d) == std::ceil(d))
		std::cout << ".0";
	std::cout << std::endl;
}