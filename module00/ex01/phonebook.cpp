/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/20 15:01:27 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/03 11:47:22 by jhille        ########   odam.nl         */
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

static void	print_contact_info(Contact &entry)
{
	std::cout << "First name: " << entry.first_name << std::endl
				<< "Last name: " << entry.last_name << std::endl
				<< "Nickname: " << entry.nickname << std::endl
				<< "Phone number: " << entry.phone_number << std::endl
				<< "Darkest secret: " << entry.darkest_secret << std::endl;
}

void	PhoneBook::search_ct(void)
{
	int			index;

	column_print();
	if (contacts[0].age == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	while (1)
	{
		std::cout << "Select contact by typing the index number";
		if(std::cin >> index)
		{
			if (contacts[index].age == 0)
				std::cout << "Error: selected index is empty" << std::endl;
			else
			{
				print_contact_info(contacts[index]);
				return ;
			}
		}
		else
			std::cout << "Error: please type a valid number" << std::endl;
	}
}
