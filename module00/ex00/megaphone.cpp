/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/20 12:29:25 by jhille        #+#    #+#                 */
/*   Updated: 2022/04/20 17:41:15 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int argc, char *argv[])
{
	std::string	str[argc - 1];

	if (argc > 1)
	{
		for (int i = 0; i < argc - 1; i++)
		{
			str[i] = std::string(argv[i + 1]);
			for (int k = 0; k < str[i].size(); k++)
			{
				str[i][k] = toupper(str[i][k]);
			}
			std::cout << str[i];
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << '\n';
	return (0);
}
