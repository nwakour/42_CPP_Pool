/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:43:01 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/22 16:42:54 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
	std::srand (std::time(NULL));
	Bureaucrat	test("JAY", 1);
	Bureaucrat	test1("JEE", 150);
	ShrubberyCreationForm form("shrubbery");
	RobotomyRequestForm form1("Roboto");
	PresidentialPardonForm form2("Pardon");

	std::cout << test << std::endl;
	std::cout << form << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	
	try
	{
		form.execute(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		form1.execute(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		form2.execute(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "************" << std::endl;
	std::cout << "************" << std::endl;
	try
	{
		form.beSigned(test);
		form.execute(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "************" << std::endl;
	std::cout << "************" << std::endl;
	try
	{
		form.execute(test1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "************" << std::endl;
	std::cout << "************" << std::endl;
	try
	{
		form1.beSigned(test);
		form1.execute(test);
		form1.execute(test);
		form1.execute(test);
		form1.execute(test);
		form1.execute(test);
		form1.execute(test);
		form1.execute(test);
		form1.execute(test);
		form1.execute(test);
		form1.execute(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "************" << std::endl;
	std::cout << "************" << std::endl;
	try
	{
		form2.beSigned(test);
		form2.execute(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "************" << std::endl;
	std::cout << "************" << std::endl;
}