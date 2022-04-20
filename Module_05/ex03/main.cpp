/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:43:01 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/23 17:37:01 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Intern.hpp"

int main()
{
	Bureaucrat	test("JAAY", 2);
	Intern	new_guy;
	Form*	tmp;
	std::cout << "**************" << std::endl;
	std::cout << "**************" << std::endl;
	tmp = new_guy.makeForm("robotomy request", "testform");
	try
	{
		tmp->execute(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "**************" << std::endl;
	std::cout << "**************" << std::endl;
	try
	{
		tmp->beSigned(test);
		tmp->execute(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *tmp << std::endl;
	delete tmp;
	std::cout << "**************" << std::endl;
	std::cout << "**************" << std::endl;
	tmp = new_guy.makeForm("presidential pardon", "testform");
	try
	{
		tmp->execute(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "**************" << std::endl;
	std::cout << "**************" << std::endl;
	try
	{
		tmp->beSigned(test);
		tmp->execute(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *tmp << std::endl;
	delete tmp;
	std::cout << "**************" << std::endl;
	std::cout << "**************" << std::endl;
	tmp = new_guy.makeForm("shrubbery creation", "testform");
	try
	{
		tmp->execute(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "**************" << std::endl;
	std::cout << "**************" << std::endl;
	try
	{
		tmp->beSigned(test);
		tmp->execute(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *tmp << std::endl;
	delete tmp;
	std::cout << "**************" << std::endl;
	std::cout << "**************" << std::endl;
	tmp = new_guy.makeForm("aaa", "testform");
	std::cout << tmp << std::endl;
}