/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 16:05:11 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/21 13:32:20 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// -------- Constructors and Destructors -------- //

Character::Character()
{
	for (int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
	}
	trashItem = NULL;
}

Character::Character( std::string nameParam ) : name(nameParam)
{
}

Character::Character( const Character& src )
{
	*this = src;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
}

// -------- Operator Overloads -------- //

Character &				Character::operator=( Character const & rhs )
{
	AMateria*	temp;

	if ( this != &rhs )
	{
		this->name = rhs.name;
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i] != NULL)
			{
				temp = rhs.inventory[i].clone();
				delete inventory[i];
			}
		}
	}
	return *this;
}

// -------- Methods -------- //

std::string const&	Character::getName() const
{
	return (name);
}

void	Character::equip( AMateria* m )
{
	int	i

	i = 0;
	while (i < 4 && inventory[i] != NULL)
		i++;
	if (i < 4)
		inventory[i] = m;
}

void	Character::unequip( int idx )
{
	if (trashItem != NULL)
		delete trashItem;
	trashItem = inventory[idx];
	inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		inventory[idx].use(target);
	}
}
