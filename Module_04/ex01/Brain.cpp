/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 21:47:16 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 17:12:39 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = "Idea";
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	return *this;
}

void Brain::show_ideas(void)
{
	for (size_t i = 0; i < 100; i++)
		std::cout << _ideas[i] << std::endl;
}
