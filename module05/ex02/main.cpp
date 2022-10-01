/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:39:43 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/01 17:04:53 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{
	try
	{
		Bureaucrat	alex("Alexey", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Alexey's " << e.what() << '\n';
	}

	try
	{
		ShrubberyCreationForm	failedform("home");
	}
	catch(const std::exception& e)
	{
		std::cerr << "ShrubberyCreationForm" << e.what() << '\n';
	}

	Bureaucrat				Bob("Bob", 140);
	Bureaucrat				Tom("Tom", 40);
	ShrubberyCreationForm	form1("home");
	RobotomyRequestForm		form2("Keith");

	std::cout << form1 << std::endl;
	Bob.signForm(form1);
	Bob.executeForm(form1);
	Tom.signForm(form2);
	Tom.executeForm(form2);
	return (0);
}
