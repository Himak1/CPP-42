/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:39:43 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/22 16:45:24 by jhille        ########   odam.nl         */
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

	
	return (0);
}
