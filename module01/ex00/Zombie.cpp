/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 14:49:35 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/02 15:43:00 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name_param )
{
	name = name_param;
}

Zombie::~Zombie()
{
	std::cout << name << " has been destroyed" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
