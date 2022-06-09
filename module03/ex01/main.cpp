/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 16:50:22 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/09 16:10:14 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap	bob("Bob");

	bob.attack("Kevin");
	bob.takeDamage(4);
	bob.beRepaired(4);
	std::cout << std::endl;

	ScavTrap	temp1("Kate");
	ScavTrap	temp2(temp1);
	ScavTrap	kate("PLACEHOLDER");
	std::cout << std::endl;

	kate = temp2;
	kate.attack("Kevin");
	kate.takeDamage(4);
	kate.beRepaired(4);
	kate.guardGate();
	std::cout << std::endl;
}