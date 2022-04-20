/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:58:26 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/03 17:45:58 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;
	std::string string[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int lvl = -1;

	if (argc != 2)
	{
		std::cout << "I NEED ARGUMENTS" << std::endl;
		return (1);
	}	
	for(size_t i = 0; i < 4; i++){
		if (!string[i].compare((std::string)argv[1]))
		{
			lvl  = i + 1;
			break;
		}
	}
	switch (lvl)
	{
	case (1):
		karen.complain("DEBUG");
		break;
	case (2):
		for (int i = 0; i < 2; i++)
		{
			karen.complain(string[i]);
			if (i + 1 < 2)
				std::cout << std::endl;
		}
		break;
	case (3):
		for (int i = 0; i < 3; i++)
		{
			karen.complain(string[i]);
			if (i + 1 < 3)
				std::cout << std::endl;
		}
		break;
	case (4):
		for (int i = 0; i < 4; i++)
		{
			karen.complain(string[i]);
			if (i + 1 < 4)
				std::cout << std::endl;
		}
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return (0);
}
