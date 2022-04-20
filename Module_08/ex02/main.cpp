/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:34:22 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/21 21:40:52 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main(void)
{
	MutantStack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	for (MutantStack<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		std::cout << *it <<std::endl;
	}
	return(0);
}