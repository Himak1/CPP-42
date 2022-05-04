/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/20 15:01:27 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/04 16:11:52 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <iomanip>
#include "phonebook.hpp"

// -------- replace_ct() functions -------- //

int	PhoneBook::replace_ct(void)
{
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].getAge() == 8)
		{
			contacts[i].setAge(0);
			return (i);
		}
	}
	return (-1);
}
// _______________________________________


// -------- add_ct() functions -------- //

static int	find_blank_ct(Contact (&contacts)[8])
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (contacts[i].getAge() == 0)
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
		if (contacts[i].getAge() != 0)
			contacts[i].setAge(contacts[i].getAge() + 1);
	}
	contacts[blank_ct].ini_contact();
}
// _______________________________________


// -------- search_ct() functions -------- //

static void	print_contact_info(Contact &entry)
{
	std::cout << "First name: " << entry.getFirstName() << std::endl
				<< "Last name: " << entry.getLastName() << std::endl
				<< "Nickname: " << entry.getNickname() << std::endl
				<< "Phone number: " << entry.getPhoneNumber() << std::endl
				<< "Darkest secret: " << entry.getDarkestSecret() << std::endl;
}

void	PhoneBook::search_ct(void)
{
	int			index;

	if (contacts[0].getAge() == 0)
	{
		std::cout << "Phonebook is empty, add an entry" << std::endl;
		return ;
	}
	column_print();
	while (1)
	{
		std::cout << "Select contact by typing the index number:";
		std::cin >> index;
		if(std::cin.good())
		{
			if (index < 0 || index > 7 || contacts[index].getAge() == 0)
				std::cout << "Error: invalid index" << std::endl;
			else
			{
				print_contact_info(contacts[index]);
				return ;
			}
		}
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Error: please type a valid number" << std::endl;
		}
	}
}
// _______________________________________