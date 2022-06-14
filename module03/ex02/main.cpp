/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 16:50:22 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/14 17:17:44 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
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

	FragTrap	temp3("Karenina");
	FragTrap	temp4(temp3);
	FragTrap	karenina("PLACEHOLDER");
	std::cout << std::endl;

	temp4.takeDamage(20);

	karenina = temp4;
	karenina.attack("Kevin");
	karenina.takeDamage(4);
	karenina.beRepaired(4);
	karenina.highFivesGuys();
	std::cout << std::endl;

	return (0);
}
