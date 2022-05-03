/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/03 15:53:07 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/03 15:53:11 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
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
