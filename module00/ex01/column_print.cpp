/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   column_print.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 17:06:23 by jhille        #+#    #+#                 */
/*   Updated: 2022/04/25 17:12:18 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "phonebook.hpp"

static void	print_row(const std::string (&strings)[4])
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << '|' << std::setw(10) << std::setfill(' ') << strings[i];
	}
	std::cout << '|' << std::endl;
}

static void	convert_to_arr(std::string (&strings)[4], Contact c_entry, int i)
{
	strings[0] = std::to_string(i);
	strings[1] = c_entry.first_name;
	strings[2] = c_entry.last_name;
	strings[3] = c_entry.nickname;
	for (int i = 1; i < 4; i++)
	{
		if (strings[i].size() > 10)
		{
			strings[i].resize(9);
			strings[i].append(".");
		}
	}
}

void	PhoneBook::column_print(void)
{
	std::string	entries[4] = {"Index", "First name", "Last name", "Nickname"};

	std::cout << '+' << std::setw(44) << std::setfill('-') << '+' << std::endl;
	print_row(entries);
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].age == 0)
			break ;
		std::cout << '+' << std::setw(44) << std::setfill('-') << '+' << std::endl;
		convert_to_arr(entries, contacts[i], i);
		print_row(entries);
	}
	std::cout << '+' << std::setw(44) << std::setfill('-') << '+' << std::endl;
}
