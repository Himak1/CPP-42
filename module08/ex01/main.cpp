/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 17:24:42 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/01 18:05:20 by jhille        ########   odam.nl         */
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
	return (0);
}