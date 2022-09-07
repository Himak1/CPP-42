/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:39:43 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/07 11:26:42 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	alex("Alexey", 151);
	Form		f1("f1", 100, 50);

	std::cout << f1 << std::endl;
	return (0);
}
