/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 15:50:29 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/07 17:42:22 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// -------- Constructors and Destructor -------- //

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap( std::string givenName )
	: ClapTrap(givenName)
{
	std::cout << "ClapTrap " << givenName << " evolved into a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& src )
	: ClapTrap(src)
{
}

ScavTrap::~ScavTrap()
{
}

// -------- Operator Overload -------- //

/*
ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_value = rhs.getValue();
	}
	return *this;
}
*/

// -------- Methods -------- //

void	ScavTrap::attack( const std::string& target )
{
	if (!isAlive() || !hasEnergy())
		return ;	
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
			<< attackDamage << " points of damage" << std::endl;
	energyPoints -= 1;
}
