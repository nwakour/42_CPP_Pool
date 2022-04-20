/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:45:48 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/04 18:13:54 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

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

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif