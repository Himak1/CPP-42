/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 16:27:12 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/18 16:51:19 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void printc(const char& c)
{
	std::cout << c << std::endl;
}

void	printi(const int& i)
{
	std::cout << i << std::endl;
}

int	main()
{
	char	c_array[] = {'a', 'b', 'c', 'd'};
	int		int_array[] = {1, 2, 3, 4};

	iter(c_array, 4, printc);
	iter(int_array, 4, printi);
	return (0);
}
