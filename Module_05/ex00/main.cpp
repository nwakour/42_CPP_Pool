/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:43:01 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/22 15:30:29 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try
    {
        Bureaucrat i("JAY", 160);

    }
    catch (std::exception &excep)
    {
        std::cout << excep.what() << std::endl;
    }
	try
    {
        Bureaucrat i("JAY", 0);

    }
    catch (std::exception &excep)
    {
        std::cout << excep.what() << std::endl;
    }
    try
    {
        Bureaucrat i("JAY", 1);
        std::cout << i << std::endl;
		i.Decrement();
        std::cout << i << std::endl;
        i.Increment();
        std::cout << i << std::endl;
		i.Increment();
        std::cout << i << std::endl;

    }
    catch (std::exception &excep)
    {
        std::cout << excep.what() << std::endl;
    }

	try
    {
        Bureaucrat i("JAY", 150);
        std::cout << i << std::endl;
		i.Increment();
        std::cout << i << std::endl;
        i.Decrement();
        std::cout << i << std::endl;
		i.Decrement();
        std::cout << i << std::endl;
    }
    catch (std::exception &excep)
    {
        std::cout << excep.what() << std::endl;
    }
	
    return (0);
}
