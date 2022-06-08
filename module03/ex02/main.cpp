/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 16:50:22 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/08 18:05:54 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	FragTrap	kate("Kate");

	kate.attack("Kevin");
	kate.takeDamage(4);
	kate.beRepaired(4);
	kate.highFivesGuys();
}