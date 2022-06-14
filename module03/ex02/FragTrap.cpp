/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 15:50:29 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/14 17:20:40 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// -------- Constructors and Destructor -------- //

FragTrap::FragTrap( void )
	: ClapTrap()
{
	std::cout << "ClapTrap " << name << " upgraded itself into a FragTrap" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap( std::string givenName )
	: ClapTrap(givenName)
{
	std::cout << "ClapTrap " << givenName << " is upgrading itself into a FragTrap" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& src )
	: ClapTrap(src)
{
	std::cout << "ClapTrap " << src.name << " is upgrading itself into a FragTrap" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " is downgrading itself into a ClapTrap" << std::endl;
}

// -------- Methods -------- //

void	FragTrap::attack( const std::string& target )
{
	if (!isAlive() || !hasEnergy())
		return ;	
	std::cout << "FragTrap " << name << " attacks " << target << ", causing "
			<< attackDamage << " points of damage" << std::endl;
	energyPoints -= 1;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << name << " received a positive performance report! It suggests a high five!" << std::endl;
}
