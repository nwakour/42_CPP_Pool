/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:03:19 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/13 19:18:19 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

typedef struct s_Data
{
	int i;
	double d;
	std::string s;
}Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data data;
	Data *pdata;

	data.i = 10;
	data.d = 0.5;
	data.s = "hello";

	std::cout << "*Before*"<< std::endl;
	std::cout << " i = "<< data.i << std::endl;
	std::cout << " d = "<< data.d << std::endl;
	std::cout << " s = "<< data.s << std::endl << std::endl;

	uintptr_t p = serialize(&data);
	std::cout << "*Adresses*"<< std::endl;
	std::cout << "uintptr = "<<  &p << std::endl;
	std::cout << "data = " <<  &data << std::endl << std::endl;
	
	pdata = deserialize(p);
	std::cout << "*After*"<< std::endl;
	std::cout << " i = "<< pdata->i << std::endl;
	std::cout << " d = "<< pdata->d << std::endl;
	std::cout << " s = "<< pdata->s << std::endl;

	return (0);
}