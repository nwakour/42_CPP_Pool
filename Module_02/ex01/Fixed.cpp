/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:49:20 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 18:18:18 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void Fixed::operator=(const Fixed& to_copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = to_copy.getRawBits();
	return;
}

Fixed::Fixed(const Fixed& to_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = to_copy;
	return;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	_value = nb << _bits;
	return;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(nb * (1 << _bits));
	return;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
	return;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

float Fixed::toFloat( void ) const
{
	return ((_value) / (float)(1 <<_bits));
}

int Fixed::toInt( void ) const
{
	return (_value >> _bits);
}

std::ostream& operator<<(std::ostream& COUT, const Fixed& fixed)
{
	COUT << fixed.toFloat();
	return (COUT);
}
