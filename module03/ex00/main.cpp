/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/06 14:46:24 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/09 16:08:14 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	temp1("Kev");
	ClapTrap	temp2(temp1);
	ClapTrap	kev("PLACEHOLDER");
	

	kev = temp2;
	std::cout << std::endl;

	kev.takeDamage(10);
	kev.beRepaired(4);
	std::cout << std::endl;
}
