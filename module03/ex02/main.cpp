/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 16:50:22 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/09 15:41:19 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap	karenina("Karenina");

	karenina.attack("Kevin");
	karenina.takeDamage(4);
	karenina.beRepaired(4);
	std::cout << std::endl;

	ScavTrap	konizhev("Konizhev");

	konizhev.attack("Kevin");
	konizhev.takeDamage(4);
	konizhev.beRepaired(4);
	konizhev.guardGate();

	std::cout << std::endl;
	FragTrap	kate("Kate");

	kate.attack("Kevin");
	kate.takeDamage(4);
	kate.beRepaired(4);
	kate.highFivesGuys();

	std::cout << std::endl;
}