/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 12:34:49 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/02 12:18:29 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int		main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;

	while (1)
	{
		std::cout << "Type ADD, SEARCH or EXIT\n";
		std::cin >> cmd;
		if (!cmd.compare("ADD"))
			phonebook.add_ct();
		else if (!cmd.compare("SEARCH"))
			phonebook.search_ct();
		else if (!cmd.compare("EXIT"))
			break ;
	}
}