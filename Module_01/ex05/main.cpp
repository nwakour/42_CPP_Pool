/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:58:26 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/03 17:08:33 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen karen;
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	karen.complain("dd");
	return (0);
}