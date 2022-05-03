/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 12:54:15 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/03 14:21:04 by jhille        ########   odam.nl         */
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
		std::cin >> temp;
		if (!temp.empty())
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
