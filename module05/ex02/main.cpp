/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:39:43 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/07 13:25:31 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

	Bureaucrat				Bob("Bob", 130);
	Bureaucrat				Tom("Tom", 40);
	Bureaucrat				Kate("Kate", 4);
	ShrubberyCreationForm	form1("home");
	RobotomyRequestForm		form2("Keith");
	PresidentialPardonForm	form3("John");

	std::cout << form1 << std::endl;
	Bob.signForm(form1);
	Bob.executeForm(form1);
	Tom.signForm(form2);
	Tom.executeForm(form2);
	Kate.signForm(form3);
	Kate.executeForm(form3);

	AForm	*generic = new RobotomyRequestForm("Bender");
	delete generic;
	return (0);
}
