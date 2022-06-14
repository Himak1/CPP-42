/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 15:50:29 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/14 17:10:26 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// -------- Constructors and Destructor -------- //

ScavTrap::ScavTrap( void )
	: ClapTrap()
{
	std::cout << "ClapTrap " << name << " upgraded itself into a ScavTrap" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap( std::string givenName )
	: ClapTrap(givenName)
{
	std::cout << "ClapTrap " << givenName << " is upgrading itself into a ScavTrap" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& src )
	: ClapTrap(src)
{
	std::cout << "ClapTrap " << src.name << " is upgrading itself into a ScavTrap" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " is downgrading itself into a ClapTrap" << std::endl;
}

// -------- Methods -------- //

void	ScavTrap::attack( const std::string& target )
{
	if (!isAlive() || !hasEnergy())
		return ;	
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
			<< attackDamage << " points of damage" << std::endl;
	energyPoints -= -1;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << name << " is now in Guard Gate mode!" << std::endl;
}
