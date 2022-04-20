/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:23:41 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/21 21:42:15 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void){
	return;
}
Span::~Span(void){
	return;
}

Span::Span(const Span& to_copy){
	*this = to_copy;
	return;
}

Span &Span::operator=(const Span& to_copy){
	_v = to_copy._v;
	_N = to_copy._N;
	_l = to_copy._l;
	return (*this);
}

Span::Span(unsigned int N){
	_N = N;
	_l = 0;
	return;
}

int	Span::shortestSpan(void)
{
	if (_v.size() < 2)
		return (-1);
	std::sort(_v.begin(), _v.end());
	return (*(++(_v.begin())) - *(_v.begin()));
}

int	Span::longestSpan(void)
{
	if (_v.size() < 2)
		return (-1);
	std::sort(_v.begin(), _v.end());
	return ( (_v.back()) - *(_v.begin()));
}

void	Span::addNumber(int nb){
	if (_l == _N)
		throw OutOfSpace();
	_v.push_back(nb);
	_l++;
	return;
}

void	Span::addRange(unsigned int nb){
	if (_l == _N || _l + nb > _N)
		throw OutOfSpace();
	for(unsigned int i = 0; i < nb; i++)
	{
		_v.push_back(rand() % INT_MAX);
	}
	_l +=nb;
	return;
}
