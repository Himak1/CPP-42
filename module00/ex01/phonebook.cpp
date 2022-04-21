/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/20 15:01:27 by jhille        #+#    #+#                 */
/*   Updated: 2022/04/21 16:52:52 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int			PhoneBook::replace_ct(void)
{
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].age == 8)
		{
			contacts[i].age = 0;
			contacts[i].first_name = "";
			contacts[i].last_name = "";
			contacts[i].nickname = "";
			contacts[i].phone_number = "";
			contacts[i].darkest_secret = "";
		}
	}
}

static int	find_blank_ct(Contact (&contacts)[8])
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (contacts[i].age == -1)
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
	for (int k = 0; k < 8; k++)
	{
		if (contacts[k].age != -1)
			contacts[k].age++;
	}
	contacts[blank_ct].ini_contact();
}

/*
void	search_ct(void)
{
	
}
*/
