/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:15:29 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/16 16:13:41 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FUNC_H__
#define __FUNC_H__

#include <iostream>

template<typename T>
void swap(T &x, T &y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}
template<typename T>
T min(T const &x, T const &y)
{
	if (x == y || x > y)
		return (y);
	return (x);
}

template<typename T>
T max(T const &x, T const &y)
{
	if (x == y || x < y)
		return (y);
	return (x);
}
#endif