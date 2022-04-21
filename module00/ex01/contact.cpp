/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 12:54:15 by jhille        #+#    #+#                 */
/*   Updated: 2022/04/21 14:54:56 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

std::string getLineNoBlanks(void)
{
	std::string	temp;

	while (1)
	{
		std::cin >> temp;
		if (temp.compare(""))
			break ;
	}
	return (temp);
}

void		Contact::ini_contact(void)
{
	first_name = getLineNoBlanks();
	last_name = getLineNoBlanks();
	nickname = getLineNoBlanks();
	phone_number = getLineNoBlanks();
	darkest_secret = getLineNoBlanks();
}