/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:39:43 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/07 17:53:00 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	alex("Alexey", 151);
	Bureaucrat	bob("Bob", 100);
	Form		f1("form 24D", 100, 50);
	Form		f2("form 55C", 40, 50);
	Form		failedform("form 99A", 0, 10);

	std::cout << std::endl;
	std::cout << f1 << std::endl;
	bob.signForm(f1);
	bob.signForm(f2);
	return (0);
}
