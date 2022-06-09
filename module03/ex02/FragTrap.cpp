/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 15:50:29 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/09 16:50:55 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// -------- Constructors and Destructor -------- //

FragTrap::FragTrap( void )
	: ClapTrap()
{
	std::cout << "ClapTrap " << getName() << " upgraded itself into a FragTrap" << std::endl;
	setHP(100);
	setEP(100);
	setAtkDmg(30);
}

FragTrap::FragTrap( std::string givenName )
	: ClapTrap(givenName)
{
	std::cout << "ClapTrap " << givenName << " is upgrading itself into a FragTrap" << std::endl;
	setHP(100);
	setEP(100);
	setAtkDmg(30);
}

FragTrap::FragTrap( const FragTrap& src )
	: ClapTrap(src)
{
	std::cout << "ClapTrap " << src.getName() << " is upgrading itself into a FragTrap" << std::endl;
	setName(src.getName());
	setHP(src.getHP());
	setEP(src.getEP());
	setAtkDmg(src.getAtkDmg());
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName() << " is downgrading itself into a ClapTrap" << std::endl;
}

// -------- Methods -------- //

void	FragTrap::attack( const std::string& target )
{
	if (!isAlive() || !hasEnergy())
		return ;	
	std::cout << "FragTrap " << getName() << " attacks " << target << ", causing "
			<< getAtkDmg() << " points of damage" << std::endl;
	setEP(getEP() - 1);
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << getName() << " received a positive performance report! It suggests a high five!" << std::endl;
}
