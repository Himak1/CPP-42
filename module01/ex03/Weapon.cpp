/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/03 15:53:07 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/04 18:03:08 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string weaponType )
{
	type = weaponType;
}

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType( void )
{
	return (type);
}

void	Weapon::setType( std::string newType )
{
	type = newType;
}
