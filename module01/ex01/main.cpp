/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/26 15:46:47 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/02 16:30:56 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int		hordeCount;
	Zombie* horde;

	hordeCount = 4;
	horde = zombieHorde(hordeCount, "Member of the Horde");
	for (int i = 0; i < hordeCount; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
