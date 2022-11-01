/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 14:48:26 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/01 17:21:43 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

#define LENGTH 50

int	main()
{
	std::vector<int>			v;
	std::vector<int>::iterator	it;

	srand(time(NULL));
	for (int i = 1; i < LENGTH + 1; i++)
		v.push_back(i);

	std::cout << *easyfind(v, 42) << std::endl;
	try
	{
		it = easyfind(v, 51);
	}
	catch (std::exception &e)
	{
		std::cerr << "caught " << e.what() << '\n';
	}
	return (0);
}
