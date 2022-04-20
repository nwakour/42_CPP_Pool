/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:45:21 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 18:32:38 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a  = " << a << std::endl;
	std::cout << "b  = " << b << std::endl;
	std::cout << "++a  = " << ++a << std::endl;
	std::cout << "a  = " << a << std::endl;
	std::cout << "a++  = " << a++ << std::endl;
	std::cout << "a  = " << a << std::endl;
	std::cout << "a--  = " << a-- << std::endl;
	std::cout << "a  = " << a << std::endl;
	std::cout << "--a  = " << --a << std::endl;
	std::cout << "a  = " << a << std::endl;
	a++;
	a++;
	a++;
	a++;
	a++;
	a++;
	std::cout << "a  = " << a << std::endl;
	std::cout << "b  = " << b << std::endl;
	
	std::cout << "a + b  = " << (a + b) << std::endl;
	std::cout << "a / b  = " << (a / b) << std::endl;
	std::cout << "a * b  = " << (a * b) << std::endl;
	std::cout << "a - b  = " << (a - b) << std::endl;
	std::cout << "a  = " << a << std::endl;
	std::cout << "b  = " << b << std::endl;
	std::cout << "max  = " << Fixed::max( a, b ) << std::endl;
	std::cout << "min  = " << Fixed::min( a, b ) << std::endl;
	std::cout << "is a == b " << (a == b) << std::endl;
	std::cout << "is a > b " << (a > b) << std::endl;
	std::cout << "is a < b " << (a < b) << std::endl;
	std::cout << "is a != b " << (a != b) << std::endl;
	std::cout << "is a >= b " << (a >= b) << std::endl;
	std::cout << "is a <= b " << (a <= b) << std::endl;
	return 0;
}