/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   column_print.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 17:06:23 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/04 16:13:29 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "phonebook.hpp"

static std::string	str_cutoff(std::string str)
{
	std::string	temp;

	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

static void	print_row(Contact &entry, int index)
{
	std::string	temp;

	if (index == -1)
		std::cout << '|' << std::setw(10) << std::setfill(' ');
	else
		std::cout << '|' << std::setw(10) << std::setfill(' ') << index;
	std::cout << '|' << std::setw(10) << std::setfill(' ') << str_cutoff(entry.getFirstName());
	std::cout << '|' << std::setw(10) << std::setfill(' ') << str_cutoff(entry.getLastName());
	std::cout << '|' << std::setw(10) << std::setfill(' ') << str_cutoff(entry.getNickname()) << "|" << std::endl;
}

void	PhoneBook::column_print(void)
{
	int			i;

	i = 0;
	while (i < 8)
	{
		if (contacts[i].getAge() == 0)
			break ;
		std::cout << '+' << std::setw(44) << std::setfill('-') << '+' << std::endl;
		print_row(contacts[i], i);
		i++;
	}
	std::cout << '+' << std::setw(44) << std::setfill('-') << '+' << std::endl;
}
