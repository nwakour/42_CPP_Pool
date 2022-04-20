/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 21:47:14 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/05 17:43:36 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Brain
{
protected:
	std::string _ideas[100];
public:
	Brain(void);
	~Brain(void);
	Brain(const Brain&);
	Brain &operator=(const Brain&);

	void show_ideas(void);
};