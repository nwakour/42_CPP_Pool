/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:00:10 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 20:04:18 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int my_replace(std::string& str, std::string s1, std::string s2, int pos)
{
	if (pos == -1)
		return (-1);
	str.erase(pos, s1.size());
	str.insert(pos, s2);
	return (pos + s2.size());
}

int	main(int argc, char **argv)
{
	std::ifstream file;
	std::ofstream dist;
	std::string str;
	size_t i;

	if(argc != 4)
	{
		std::cout << "3 arguments needed" << std::endl;
		return (1);
	}
	file.open(argv[1]);
	if (file.fail())
	{
		std::cout << "file doesn't exist" << std::endl;
		return (1);
	}
	else if (std::string(argv[2]).empty())
	{
		std::cout << "Impossible to replace empty string" << std::endl;
		return (1);
	}
	else
	{
		std::getline(file, str, '\0');
		i = 0;
		while ((i = my_replace(str, argv[2], argv[3], str.find(argv[2], i))) != -1);
		dist.open((std::string)argv[1] + ".replace");
		if (dist.fail())
		{
			std::cout << "Error opening file" << std::endl;
			file.close();
			return (1);
		}
		dist << str << std::endl;
		file.close();
		dist.close();
	}
	return (0);
}
