/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 14:48:06 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/11 11:41:45 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "StringToLiterals.hpp"

int	

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "convert: give precisely 1 string as input" << std::endl;
		return (1);
	}

	int	type = literalType(argv[1]);
	if (type == CHAR)
		assign_char();
	else if (type == INT)
		assign_int();
	else if (type == FLOAT)
		assign_float();
	else if (type == DOUBLE)
		assign_float();
	else
	{
		std::cout << "convert: input isn't convertible to any literal type" << std::endl;
		return (1);
	}
	return (0);
}