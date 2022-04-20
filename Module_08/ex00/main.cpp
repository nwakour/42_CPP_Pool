/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:05:53 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/20 18:04:39 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <array>
#include <algorithm>

int main(void)
{
	{
		std::vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);
		std::cout << "*VECTOR*" << std::endl;
		std::cout << easyfind(v, 5) << std::endl;
		std::cout << easyfind(v, 6) << std::endl;
	}
	{
		std::array<int,5> a = {1,2,3,4,5};
		std::cout << std::endl << "*ARRAY" << std::endl;
		std::cout << easyfind(a, 5) << std::endl;
		std::cout << easyfind(a, 6) << std::endl;
	}

	return(0);
}