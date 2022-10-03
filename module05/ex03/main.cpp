/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:39:43 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/03 16:02:05 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat				Bob("Bob", 130);
	RobotomyRequestForm		form1("Keith");
	PresidentialPardonForm	form2("Keith");

	Bob.signForm(form1);
	Bob.executeForm(form1);
	return (0);
}
