/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 12:54:15 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/04 13:58:46 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

Contact::Contact()
{
	age = 0;
}

static std::string	getline_no_blanks(std::string message)
{
	std::string	temp;

	while (1)
	{
		std::getline(std::cin, temp);
		if (!temp.empty() || std::cin.eof())
			break ;
	}
	return (temp);
}

void		Contact::ini_contact(void)
{
	age = 1;
	first_name = getline_no_blanks("First name: ");
	last_name = getline_no_blanks("Last name: ");
	nickname = getline_no_blanks("Nickname: ");
	phone_number = getline_no_blanks("Phone number: ");
	darkest_secret = getline_no_blanks("Darkest secret: ");
}

const std::string& Contact::getFirstName(void)
{
	return (first_name);
}

const std::string& Contact::getLastName(void)
{
	return (last_name);
}

const std::string& Contact::getNickname(void)
{
	return (nickname);
}

const std::string& Contact::getPhoneNumber(void)
{
	return (phone_number);
}

const std::string& Contact::getDarkestSecret(void)
{
	return (darkest_secret);
}
