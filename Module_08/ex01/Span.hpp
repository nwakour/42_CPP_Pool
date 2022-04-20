/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:15:40 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/20 19:54:24 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_H__
#define __SPAN_H__

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class Span
{
	private:
		std::vector<int> _v;
		unsigned int _N;
		unsigned int _l;
		Span(void);
	public:
		Span(const Span&);
		Span &operator=(const Span&);
		~Span(void);

		Span(unsigned int);
		int shortestSpan(void);
		int longestSpan(void);
		void	addNumber(int);
		void	addRange(unsigned int);
		class OutOfSpace : public std::exception
		{
			public:
				const char * what () const throw () {
	  				return "Out of space";
   				}
		};
};

#endif