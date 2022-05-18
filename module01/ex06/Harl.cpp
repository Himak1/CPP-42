/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/17 12:37:38 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/18 16:41:55 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	arr[0] = &Harl::debug;
	arr[1] = &Harl::info;
	arr[2] = &Harl::warning;
	arr[3] = &Harl::error;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}

Harl::~Harl()
{
}

void	Harl::complain( std::string level )
{
	int	level_val;

	for (int i = 0; i < 4; i++)
	{
		if (!levels[i].compare(level))
			level_val = i;
	}
	switch(level_val)
	{
		case 0:
			(this->*arr[0])();
		case 1:
			(this->*arr[1])();
		case 2:
			(this->*arr[2])();
		case 3:
			(this->*arr[3])();
		default:;
	}
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
			<< std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
