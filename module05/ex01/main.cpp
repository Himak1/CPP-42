/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:39:43 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/07 11:42:41 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
		Form	failedform("form 99A", 0, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Form 99A's " << e.what() << '\n';
	}

	Bureaucrat	bob("Bob", 100);
	Form		f1("form 24D", 100, 50);
	Form		f2("form 55C", 40, 50);

	std::cout << std::endl;
	std::cout << f1 << std::endl << std::endl;
	bob.signForm(f1);
	bob.signForm(f2);
	std::cout << std::endl;

	std::cout << f1 << std::endl;
	return (0);
}
