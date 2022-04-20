/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/20 12:29:25 by jhille        #+#    #+#                 */
/*   Updated: 2022/04/20 14:57:58 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int argc, char *argv[])
{
	std::string	*str = NULL;

	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			str = new std::string(argv[i]);
			transform(str->begin(), str->end(), str->begin(), toupper);
			std::cout << *str;
			delete str;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << '\n';
	return (0);
}
