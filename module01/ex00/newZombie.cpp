/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 14:47:13 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/02 15:46:25 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie*	ret;

	ret = new Zombie(name);
	ret->announce();
	return (ret);
}
