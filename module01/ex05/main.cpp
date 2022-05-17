/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/17 12:29:13 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/17 16:37:09 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	std::string level;
	Harl		customer;

	if (argc != 2)
		return (0);
	level = std::string(argv[1]);
	customer.complain(level);
	return (0);
}
