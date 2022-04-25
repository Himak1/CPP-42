/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/20 15:01:27 by jhille        #+#    #+#                 */
/*   Updated: 2022/04/25 17:10:31 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "phonebook.hpp"

int			PhoneBook::replace_ct(void)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (contacts[i].age == 8)
		{
			contacts[i].age = 0;
			contacts[i].first_name = "";
			contacts[i].last_name = "";
			contacts[i].nickname = "";
			contacts[i].phone_number = "";
			contacts[i].darkest_secret = "";
			return (i);
		}
		i++;
	}
	return (-1);
}

static int	find_blank_ct(Contact (&contacts)[8])
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (contacts[i].age == 0)
			return (i);
		i++;
	}
	return (-1);
}

void		PhoneBook::add_ct(void)
{
	int	blank_ct;

	blank_ct = find_blank_ct(contacts);
	if (blank_ct == -1)
		blank_ct = replace_ct();
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].age != 0)
			contacts[i].age++;
	}
	contacts[blank_ct].ini_contact();
}

void	PhoneBook::search_ct(void)
{
	std::string index_str;
	int			index;

	column_print();
	while (1)
	{
		std::cout << "Select contact by typing the index number: ";
		std::cin >> index_str;
		index = std::stoi(index_str);
		
	}
}
