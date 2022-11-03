/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 17:24:42 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/03 17:13:28 by jhille        ########   odam.nl         */
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
	std::cout << a.longestSpan() << std::endl << std::endl;

	try
	{
		Span	b(1);
		b.addNRandom(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}
	
	Span	c(100000);
	c.addNRandom(10000);
	std::cout << "c shortest span: " << c.shortestSpan() << std::endl;
	std::cout << "c longest span: " << c.longestSpan() << std::endl << std::endl;

	Span	d(10);
	d.addNumber(3);
	d.addNumber(0);
	d.addNumber(6);
	d.addNRandom(7);
	std::cout << d << std::endl;

	Span	f(10);
	f.addNRandom(10);
	std::cout << f << std::endl;
	return (0);
}