/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/06 14:50:45 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/09 16:37:15 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// -------- Constructors and Destructor -------- //

ClapTrap::ClapTrap()
	: name("N/A"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default ClapTrap " << name << " initialized" << std::endl;
}

ClapTrap::ClapTrap( const std::string givenName )
	: name(givenName), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Constructing ClapTrap " << name << "!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& src )
{
	std::cout << "Creating copy of ClapTrap " << src.name << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructing ClapTrap " << name << "!" << std::endl;
}

// -------- Operator Overload -------- //

ClapTrap&	ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->energyPoints = rhs.energyPoints;
		this->attackDamage = rhs.attackDamage;
	}
	return *this;
}

// -------- Methods -------- //

void	ClapTrap::attack( const std::string& target )
{
	if (!isAlive() || !hasEnergy())
		return ;	
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
			<< attackDamage << " points of damage" << std::endl;
	energyPoints -= 1;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << name << " takes " 
				<< amount << " points of damage!" << std::endl;
	hitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (!isAlive() || !hasEnergy())
		return ;
	std::cout << "ClapTrap " << name << " is repairing itself, "
			<< "regaining " << amount << " hit points!" << std::endl;
	hitPoints += amount;
	energyPoints -= 1;
}

bool	ClapTrap::isAlive( void )
{
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name
					<< " is knocked out..." << std::endl;
		return (false);
	}
	return (true);
}

bool	ClapTrap::hasEnergy( void )
{
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name
				<< " doesn't have any energy points left..." << std::endl;
		return (false);
	}
	return (true);
}

std::string	ClapTrap::getName( void ) const
{
	return (name);
}

unsigned int	ClapTrap::getHP( void ) const
{
	return (hitPoints);
}

unsigned int	ClapTrap::getEP( void) const
{
	return (energyPoints);
}

unsigned int	ClapTrap::getAtkDmg( void ) const
{
	return (attackDamage);
}

void	ClapTrap::setName( std::string givenName )
{
	name = givenName;
}

void	ClapTrap::setHP( unsigned int hp )
{
	hitPoints = hp;
}

void	ClapTrap::setEP( unsigned int ep )
{
	energyPoints = ep;
}

void	ClapTrap::setAtkDmg( unsigned int AtkDmg )
{
	attackDamage = AtkDmg;
}