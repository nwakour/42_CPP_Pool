/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:43:01 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/22 15:37:43 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try
    {
        Form i("CC", 0, 19);

    }
    catch (std::exception &excep)
    {
        std::cout << excep.what() << std::endl;
    }
	try
    {
        Form i("CC", 160, 19);

    }
    catch (std::exception &excep)
    {
        std::cout << excep.what() << std::endl;
    }
	
	Bureaucrat i("JAY", 20);
    Form form("CC", 19, 19);
    std::cout << i << std::endl;
    std::cout << form << std::endl;

	try
    {
        form.beSigned(i);
    }
    catch (std::exception &excep)
    {
        std::cout << excep.what() << std::endl;
    }

	i.Increment();
	try
    {
        form.beSigned(i);
    }
    catch (std::exception &excep)
    {
        std::cout << excep.what() << std::endl;
    }
    std::cout << form << std::endl;
    return (0);
}
