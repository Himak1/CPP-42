/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/04 17:55:52 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/12 11:52:17 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string givenName )
{
	name = givenName;
}

HumanB::HumanB( std::string givenName, Weapon& weaponType )
	: name(givenName)
{
	weapon = &weaponType;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon( Weapon& weaponType )
{
	weapon = &weaponType;
}

void	HumanB::attack( void )
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
