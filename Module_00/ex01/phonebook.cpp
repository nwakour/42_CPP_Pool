/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:51:02 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 18:01:33 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

int main()
{
	phonebook phonebook;
	std::string buff;

	while (1)
	{
		std::cout << "ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, buff, '\n');
		if (std::cin.eof())
			return(0);
		if (!buff.compare("ADD"))
			phonebook.add_phone();
		else if (!buff.compare("SEARCH"))
			phonebook.fetch_phone();
		else if (!buff.compare("EXIT"))
			break;
		else
			continue;
		if (std::cin.eof())
			return(0);
	}
	return (0);
}
