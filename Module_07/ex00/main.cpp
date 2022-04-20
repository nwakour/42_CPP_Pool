/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:27:13 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/16 16:20:48 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

int main(void)
{
	{
		int x = 5;
		int y = 10;

		std::cout << "INT" << std::endl;
		std::cout << "x = " << x << " y = " << y << std::endl;
		::swap(x, y);
		std::cout << "swap: " << "x = " << x << " y = " << y << std::endl;
		std::cout << "min: " << ::min(x, y) << std::endl;
		std::cout << "max: " << ::max(x, y) << std::endl << std::endl;
	}
	{
		float x = 0.5f;
		float y = 10.6f;

		std::cout << "FLOAT" << std::endl;
		std::cout << "x = " << x << " y = " << y << std::endl;
		::swap(x, y);
		std::cout << "swap: " << "x = " << x << " y = " << y << std::endl;
		std::cout << "min: " << ::min(x, y) << std::endl;
		std::cout << "max: " << ::max(x, y) << std::endl << std::endl;
	}
	{
		char x = 'A';
		char y = 'a';

		std::cout << "CHAR" << std::endl;
		std::cout << "x = " << x << " y = " << y << std::endl;
		::swap(x, y);
		std::cout << "swap: " << "x = " << x << " y = " << y << std::endl;
		std::cout << "min: " << ::min(x, y) << std::endl;
		std::cout << "max: " << ::max(x, y) << std::endl << std::endl;
	}
	{
		std::string x = "hello1";
		std::string y = "hello2";

		std::cout << "STRING" << std::endl;
		std::cout << "x = " << x << " y = " << y << std::endl;
		::swap(x, y);
		std::cout << "swap: " << "x = " << x << " y = " << y << std::endl;
		std::cout << "min: " << ::min(x, y) << std::endl;
		std::cout << "max: " << ::max(x, y) << std::endl << std::endl;
	}
	return (0);
}