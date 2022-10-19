/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 17:05:25 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/19 16:54:59 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

int	main()
{
	int* a = new int();
	*a = 1;
	std::cout << *a << std::endl;

	delete a;
	return (0);
}
