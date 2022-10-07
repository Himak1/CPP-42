/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:39:43 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/07 14:41:31 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat	Bob("Bob", 130);
	Intern		Kate;
	AForm		*form1;

	form1 = Kate.makeForm("blabbobb", "garden");
	form1 = Kate.makeForm("ShrubberyCreation", "garden");
	Bob.signForm(*form1);
	Bob.executeForm(*form1);

	delete form1;
	return (0);
}
