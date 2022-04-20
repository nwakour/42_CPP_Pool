/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:27:26 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/13 21:24:23 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
	int r = (rand() % 3);
	if (r == 0)
	{
		std::cout << "Generate: A";
		return (new A());
	}
	if (r == 1)
	{
		std::cout << "Generate: B";
		return (new B());
	}
	else
	{
		std::cout << "Generate: C";
		return (new C());
	}
}

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	if (a != NULL)
	{
		std::cout << "A";
		return ;
	}
	B *b = dynamic_cast<B*>(p);
	if (b != NULL)
	{
		std::cout << "B";
		return ;
	}
	C *c = dynamic_cast<C*>(p);
	if (c != NULL)
	{
		std::cout << "C";
		return ;
	}
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A";
		(void)a;
	}
	catch(const std::exception& e)
	{
		
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B";
		(void)b;
	}
	catch(const std::exception& e)
	{
		
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C";
		(void)c;
	}
	catch(const std::exception& e)
	{
		
	}
}

int main(void)
{
	srand(time(NULL));
	
	for (int i = 0; i < 10; i++)
	{
		Base *base = generate();
		std::cout << " Prt identified : ";
		identify(base);
		std::cout << " Ref identified : ";
		identify(*base);
		std::cout << std::endl;
		delete base;
	}
	return (0);
}