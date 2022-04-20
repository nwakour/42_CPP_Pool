/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:36:04 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/16 18:47:02 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	private:
	int _n;
	};
	std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
	template< typename T >
	void print( T const & x ) { std::cout << x << std::endl; return;
}
int main(void)
{
	{
		Array<char> array(10);
		std::cout << "CHAR " << std::endl;
		std::cout << "size = " << array.size() << std::endl;
		array[9] = 'c';
		try
		{
			std::cout << array[9] << std::endl;
			std::cout << array[20] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		Array<int> array(10);
		std::cout << std::endl << "INT " << std::endl;
		std::cout << "size = " << array.size() << std::endl;
		array[9] = -1;
		try
		{
			std::cout << array[9] << std::endl;
			std::cout << array[20] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		Array<std::string> array(10);
		std::cout << std::endl << "STRING " << std::endl;
		std::cout << "size = " << array.size() << std::endl;
		array[9] = "hello";
		try
		{
			std::cout << array[9] << std::endl;
			std::cout << array[20] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		Array<Awesome> array(10);
		std::cout << std::endl << "CLASS " << std::endl;
		std::cout << "size = " << array.size() << std::endl;
		try
		{
			std::cout << array[9] << std::endl;
			std::cout << array[20] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}