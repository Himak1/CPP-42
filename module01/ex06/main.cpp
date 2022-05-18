/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/18 15:20:55 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/18 16:34:59 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl		customer;
	std::string	level;

	if (argc != 2)
		return (0);
	level = std::string(argv[1]);
	customer.complain(level);
	return (0);
}