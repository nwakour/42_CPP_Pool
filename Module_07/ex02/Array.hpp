/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:28:57 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/16 18:35:21 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <iostream>

template<typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array(void){
			_array = new T();
			_size = 1;
		}
		Array(unsigned int n){
			_array = new T[n];
			_size = n;
		}
		~Array(void){
			delete [] _array;
		}
		Array(const Array& to_copy)
		{
			*this = to_copy;
		}
		Array &operator=(Array const& to_copy)
		{
			_array = new T[to_copy._size];
			_size = to_copy._size;
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = to_copy._array[i];
			return *this;
		}
		T &operator[](unsigned int index)
		{
			if (index >= _size) {
				throw OutOfBound();
			}
			return _array[index];
		}
		unsigned int size(void) const
		{
			return (_size);
		}
		class OutOfBound : public std::exception{
			public:
				const char * what () const throw () {
					return "Index out of bound";
				}
		};
};

#endif