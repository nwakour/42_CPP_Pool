/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:49:19 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/20 20:08:15 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		try
		{
			sp.addNumber(11);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		srand(time(NULL));
		Span sp = Span(10000);
		sp.addRange(10000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		try
		{
			sp.addNumber(11);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	return(0);
}