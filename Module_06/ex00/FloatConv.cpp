/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FloatConv.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:13:18 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/23 18:10:20 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

static void FloatToChar(float f)
{
	std::cout << "char: ";
	if (isnan(f) || f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max())
		std::cout <<  "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(f);
		if (std::isprint(c))
			std::cout <<  c << std::endl;
		else
			std::cout <<  "Non displayable" << std::endl;
	}
}

static void FloatToInt(float f)
{
	std::cout << "int: ";
	if (isnan(f) || f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
		std::cout <<  "impossible" << std::endl;
	else
	{
		int i = static_cast<int>(f);
		std::cout <<  i << std::endl;
	}
}

static void FloatToDouble(float f)
{
	std::cout << "double: ";
	if (f < (std::numeric_limits<double>::max() * -1) || f > std::numeric_limits<double>::max())
		std::cout <<  "impossible" << std::endl;
	else
	{
		double d = static_cast<double>(f);
		std::cout <<  d;
		if (std::floor(d) == std::ceil(d))
			std::cout << ".0";
		std::cout << std::endl;
	}
}

void FloatConv(float &f)
{
	FloatToChar(f);
	FloatToInt(f);
	std::cout << "float: " << f;
	if (std::floorf(f) == std::ceilf(f))
		std::cout << ".0";
	std::cout << "f" << std::endl;
	FloatToDouble(f);
}