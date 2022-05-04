/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 12:54:15 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/04 17:36:23 by jhille        ########   odam.nl         */
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
		std::cout << message;
		std::getline(std::cin, temp);
		if (!temp.empty())
			break ;
		else if (std::cin.eof())
		{
			temp = "";
			break ;
		}
	}
	return (temp);
}

void		Contact::ini_contact(void)
{
	age = 1;
	first_name = getline_no_blanks("First name: ");
	if (first_name.empty())
		return ;
	last_name = getline_no_blanks("Last name: ");
	if (last_name.empty())
		return ;
	nickname = getline_no_blanks("Nickname: ");
	if (nickname.empty())
		return ;
	phone_number = getline_no_blanks("Phone number: ");
	if (phone_number.empty())
		return ;
	darkest_secret = getline_no_blanks("Darkest secret: ");
	if (darkest_secret.empty())
		return ;
}

void	Contact::setAge(int new_age)
{
	age = new_age;
}

int	Contact::getAge(void)
{
	return (age);
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
