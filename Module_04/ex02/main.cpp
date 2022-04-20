/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 05:13:34 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 21:46:30 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Animal test; //! does not compile
	int i = 0;
	const Animal* ptr[4];
	for (;i < 2; i++){
		ptr[i] = new Dog();
	}
	for (;i < 4; i++){
		ptr[i] = new Cat();
	}
	for (int j = 0;j < 4; j++){
		ptr[j]->getType();
		ptr[j]->makeSound();
	}
	for (int j = 0;j < 4; j++){
		delete ptr[j];
	}
	std::cout << "************" << std::endl;
	std::cout << "************" << std::endl;
	std::cout << "************" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* z = new Cat();
		delete j;
		delete z;
	}
	std::cout << "************" << std::endl;
	std::cout << "************" << std::endl;
	std::cout << "************" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
		std::cout << "************" << std::endl;
		tmp.show_ideas();
	}
	std::cout << "************" << std::endl;
	basic.show_ideas();
	return (0);
}