/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 17:24:42 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/03 16:03:33 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span	a(50);

	a.addNumber(42);
	a.addNumber(40);
	a.addNumber(20);
	a.addNumber(10);
	std::cout << a.longestSpan() << std::endl;

	try
	{
		Span	b(1);
		b.addNRandom(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Span	c(100000);

	c.addNRandom(10000);
	std::cout << "c shortest span: " << c.shortestSpan() << std::endl;
	std::cout << "c longest span: " << c.longestSpan() << std::endl;
	return (0);
}