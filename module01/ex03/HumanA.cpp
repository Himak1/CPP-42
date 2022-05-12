/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/03 15:53:48 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/12 11:41:39 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string givenName, Weapon& weaponType )
	: weapon(weaponType), name(givenName)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack( void )
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
