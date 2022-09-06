/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:39:43 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/06 16:32:21 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	alex("Alexey", 151);
	Bureaucrat	ike("Ike", 1);

	std::cout << alex.getName() << std::endl;
	std::cout << alex.getGrade() << std::endl;
	std::cout << ike.getName() << std::endl;
	std::cout << ike.getGrade() << std::endl;

	ike.raiseGrade();

	alex.lowerGrade();
	alex.raiseGrade();
	alex.raiseGrade();
	alex.raiseGrade();
	alex.raiseGrade();
	std::cout << alex.getGrade() << std::endl;
	return (0);
}
