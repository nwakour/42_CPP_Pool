/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:21:47 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/16 17:29:12 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_H__
#define __ITER_H__

#include <iostream>

template<typename T>
void iter(T *t, size_t count, void (*f)(T const &))
{
	for (size_t i = 0; i < count; i++)
		f(t[i]);
}

#endif