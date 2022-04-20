/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:45:48 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 21:35:54 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _bits;
	public:
		Fixed(void);
		Fixed(const Fixed&);
		void operator=(const Fixed&);
		~Fixed(void);

		Fixed(const int);
		Fixed(const float);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		bool operator==(const Fixed&) const;
		bool operator<=(const Fixed&) const;
		bool operator>=(const Fixed&) const;
		bool operator!=(const Fixed&) const;
		bool operator<(const Fixed&) const;
		bool operator>(const Fixed&) const;
		Fixed operator+(const Fixed&);
		Fixed operator-(const Fixed&);
		Fixed operator/(const Fixed&);
		Fixed operator*(const Fixed&);
		static Fixed min(const Fixed&, const Fixed&);
		static Fixed max(const Fixed&, const Fixed&);
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

};
std::ostream& operator<<(std::ostream&, const Fixed&);

#endif