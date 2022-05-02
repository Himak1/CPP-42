/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/20 15:01:27 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/02 11:38:42 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "phonebook.hpp"

Contact::Contact(void)
{
	age = 0;
}

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

static bool	isnum_str(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (isdigit(str[i]) == 0)
			return (false);
		i++;
	}
	return (true);
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
	std::string index_str;
	int			index;

	column_print();
	while (1)
	{
		std::cout << "Select contact by typing the index number, or EXIT to return to menu: ";
		std::cin >> index_str;
		if (index_str.compare("EXIT") == 0)
			return ;
		if(isnum_str(index_str) == true)
		{
			index = std::stoi(index_str);
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
