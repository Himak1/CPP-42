/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 17:05:25 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/20 15:32:53 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

int	main()
{
	Array<int>	a(42);

	a[0] = 1;
	std::cout << a[0] << std::endl;
	std::cout << a.size() << std::endl;
	return (0);
}
