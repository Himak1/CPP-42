/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 14:48:06 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/12 12:11:02 by jhille        ########   odam.nl         */
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
	if (literals.literalType(argv[1]) == -1)
	{
		std::cout << "convert: input isn't convertible to any literal type" << std::endl;
		return (1);
	}
	std::cout.precision(1);
	std::cout << literals << std::endl;
	return (0);
}