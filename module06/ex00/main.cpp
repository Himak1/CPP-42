/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 14:48:06 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/12 11:53:40 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "StringToLiterals.hpp"

int	main(int argc, char *argv[])
{
	StringToLiterals	literals;
	if (argc != 2)
	{
		std::cout << "convert: give precisely 1 string as input" << std::endl;
		return (1);
	}

	int	type = literals.literalType(argv[1]);
	if (type == CHAR)
		literals.assignFromChar();
	// else if (type == INT)
	// 	assignInt();
	// else if (type == FLOAT)
	// 	assign_float();
	// else if (type == DOUBLE)
	// 	assign_float();
	else
	{
		std::cout << "convert: input isn't convertible to any literal type" << std::endl;
		return (1);
	}
	std::cout.precision(1);
	std::cout << literals << std::endl;
	return (0);
}