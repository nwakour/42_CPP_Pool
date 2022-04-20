/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:15:40 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/16 17:28:19 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"

template<typename T>
void print( T const & x ) 
{ 
	std::cout << x << std::endl;
}

int main() 
{
	{
		int tab[] = { 0, 1, 2, 3, 4 };
		std::cout << "*INT*" << std::endl;
		iter( tab, 5, print);
	}
	{
		float tab[] = { 0.1f, 0.2f, 0.3f, 0.4f, 0.5f};
		std::cout << std::endl << "*FLOAT*" << std::endl;
		iter( tab, 5, print);
	}
	
	{
		char tab[] = { 'a', 'b', 'c', 'd', 'e'};
		std::cout << std::endl << "*CHAR*" << std::endl;
		iter( tab, 5, print);
	}
	{
		std::string tab[] = { "hello1", "hello2", "hello3", "hello4", "hello5" };
		std::cout << std::endl << "*STRING*" << std::endl;
		iter( tab, 5, print);
	}
	return 0;
}