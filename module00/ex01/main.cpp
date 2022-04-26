/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 12:34:49 by jhille        #+#    #+#                 */
/*   Updated: 2022/04/26 14:30:36 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

void	start_message(void)
{
}

int		main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;

	for (int i = 0; i < 8; i++)
		phonebook.contacts[i].age = 0;
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