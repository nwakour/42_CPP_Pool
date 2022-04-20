/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:09:02 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 18:00:03 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (size_t j = 0; j < ((std::string)argv[i]).size(); j++)
				std::cout << (char)toupper(argv[i][j]);
		}
		std::cout << std::endl;
	}
	return (0);
}
