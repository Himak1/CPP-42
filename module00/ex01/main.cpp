/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 12:34:49 by jhille        #+#    #+#                 */
/*   Updated: 2022/04/21 15:09:58 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

void	ini_phonebook(void)
{
	
}

int		main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;

	
	while (1)
	{
		std::cin >> cmd;
		if (!cmd.compare("ADD"))
			phonebook.add_ct();
		else if (!cmd.compare("SEARCH"))
			phonebook.search_ct();
		else if (!cmd.compare("EXIT"))
			break ;
	}
}