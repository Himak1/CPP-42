/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 12:54:15 by jhille        #+#    #+#                 */
/*   Updated: 2022/04/22 16:02:25 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

std::string getline_no_blanks(void)
{
	std::string	temp;

	while (1)
	{
		std::getline(std::cin, temp);
		if (!temp.empty())
			break ;
	}
	return (temp);
}

void		Contact::ini_contact(void)
{
	age = 1;
	first_name = getline_no_blanks();
	std::cout << first_name + "\n";
	last_name = getline_no_blanks();
	nickname = getline_no_blanks();
	phone_number = getline_no_blanks();
	darkest_secret = getline_no_blanks();
}