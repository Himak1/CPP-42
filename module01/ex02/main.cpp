/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:35:41 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/03 10:53:34 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;

	std::cout << (void*)&brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << (void*)&stringREF << std::endl << std::endl;

	std::cout << brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}