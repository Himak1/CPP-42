/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:39:43 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/08 17:04:50 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

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
	ShrubberyCreationForm	form1("home");

	std::cout << form1 << std::endl;

	Bob.signForm(form1);
	Bob.executeForm(form1);
	return (0);
}
