/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:11:28 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/21 21:45:02 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_H__
#define __MUTANTSTACK_H__

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(){}
		~MutantStack(){}
		MutantStack(const MutantStack<T>& to_copy)
		{
			*this = to_copy;
		}
		MutantStack<T>&	operator=(const MutantStack<T>& to_copy) 
		{
			(void)to_copy;
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{ 
			return this->c.begin();
		}
		iterator end()
		{ 
			return this->c.end();
		}
};
#endif