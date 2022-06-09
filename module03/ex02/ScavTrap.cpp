/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 15:50:29 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/09 16:51:01 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// -------- Constructors and Destructor -------- //

ScavTrap::ScavTrap( void )
	: ClapTrap()
{
	std::cout << "ClapTrap " << getName() << " upgraded itself into a ScavTrap" << std::endl;
	setHP(100);
	setEP(50);
	setAtkDmg(20);
}

ScavTrap::ScavTrap( std::string givenName )
	: ClapTrap(givenName)
{
	std::cout << "ClapTrap " << givenName << " is upgrading itself into a ScavTrap" << std::endl;
	setHP(100);
	setEP(50);
	setAtkDmg(20);
}

ScavTrap::ScavTrap( const ScavTrap& src )
	: ClapTrap(src)
{
	std::cout << "ClapTrap " << src.getName() << " is upgrading itself into a ScavTrap" << std::endl;
	setName(src.getName());
	setHP(src.getHP());
	setEP(src.getEP());
	setAtkDmg(src.getAtkDmg());
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " is downgrading itself into a ClapTrap" << std::endl;
}

// -------- Methods -------- //

void	ScavTrap::attack( const std::string& target )
{
	if (!isAlive() || !hasEnergy())
		return ;	
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing "
			<< getAtkDmg() << " points of damage" << std::endl;
	setEP(getEP() - 1);
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << getName() << " is now in Guard Gate mode!" << std::endl;
}
