/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:21:05 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/16 15:02:56 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_H__
#define __BASE_H__

#include <iostream>

class Base
{
	public:
		virtual ~Base(void){}
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif