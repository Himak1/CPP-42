/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 14:48:06 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/10 16:26:46 by jhille        ########   odam.nl         */
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
		assign_char()
	return (0);
}