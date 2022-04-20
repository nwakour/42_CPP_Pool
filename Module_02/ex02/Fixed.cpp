/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:49:20 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 21:35:48 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void)
{
	this->_value = 0;
	return;
}

Fixed::~Fixed(void)
{
	return;
}

Fixed::Fixed(const Fixed& to_copy)
{
	this->_value = to_copy.getRawBits();
	return;
}

void Fixed::operator=(const Fixed& to_copy)
{
	this->_value = to_copy.getRawBits();
	return;
}

Fixed::Fixed(const int nb)
{
	_value = nb << _bits;
	return;
}

Fixed::Fixed(const float nb)
{
	_value = roundf(nb * (1 << _bits));
	return;
}

void Fixed::setRawBits( int const raw )
{
	this->_value = raw;
	return;
}

int Fixed::getRawBits( void ) const
{
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

bool Fixed::operator==(const Fixed& fixed) const
{
	return (this->_value == fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed& fixed) const
{
	return (this->_value <= fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed& fixed) const
{
	return (this->_value >= fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed& fixed) const
{
	return (this->_value != fixed.getRawBits());
}

bool Fixed::operator<(const Fixed& fixed) const
{
	return (this->_value < fixed.getRawBits());
}

bool Fixed::operator>(const Fixed& fixed) const
{
	return (this->_value > fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed& fixed)
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed& fixed)
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed& fixed)
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed& fixed)
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);
}

Fixed Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	else
		return (b);
}

Fixed& Fixed::operator++(void)
{
	this->_value += 1 < 8;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;

	tmp = *this;
	this->_value += 1 < 8;
	return (tmp);
}

Fixed& Fixed::operator--(void)
{
	this->_value -= 1 < 8;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;

	tmp = *this;
	this->_value -= 1 < 8;
	return (tmp);
}

std::ostream& operator<<(std::ostream& COUT, const Fixed& fixed)
{
	COUT << fixed.toFloat();
	return (COUT);
}
