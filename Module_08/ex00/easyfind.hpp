/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:56:15 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/21 21:42:58 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_H__
#define __EASYFIND_H__

#include <iostream>
#include <algorithm>
template<typename T>
int	easyfind(T &t, int to_find)
{
	for (typename T::iterator it = t.begin(); it != t.end(); it++)
	{
		if (*(it) == to_find)
			return (*(it));
	}
	return (-1);
}

#endif