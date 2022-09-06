/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 16:05:11 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/06 13:59:55 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// -------- Constructors and Destructors -------- //

Character::Character()
{
	for (int i = 0; i < INV_SIZE; i++)
	{
		inventory[i] = NULL;
	}
	ground = NULL;
}

Character::Character( std::string nameParam ) : name(nameParam)
{
	for (int i = 0; i < INV_SIZE; i++)
	{
		inventory[i] = NULL;
	}
	ground = NULL;
}

Character::Character( const Character& src )
{
	*this = src;
}

Character::~Character()
{
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
	if (ground)
		lst_clear();
}

// -------- Operator Overloads -------- //

Character&				Character::operator=( Character const & rhs)
{
	if ( this != &rhs )
	{
		name = rhs.name;
		for (int i = 0; i < INV_SIZE; i++)
		{
			if (inventory[i])
				delete inventory[i];
			if (rhs.inventory[i])
				inventory[i] = rhs.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
		if (ground)
		{
			lst_clear();
			ground = NULL;
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
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
	}
	if (!ground)
		ground = new_lst(m);
	else
		lst_append(m);
}

t_lst*	Character::new_lst( AMateria* m )
{
	t_lst*	tmp;

	tmp = new t_lst;
	tmp->m = m;
	tmp->next = NULL;
	return (tmp);
}

void	Character::lst_append( AMateria* m )
{
	t_lst*	iter;

	iter = ground;
	while (iter->next)
		iter = iter->next;
	iter->next = new_lst(m);
}

void	Character::lst_clear()
{
	t_lst*	iter = ground;
	t_lst*	tmp;

	while (iter)
	{
		tmp = iter;
		iter = iter->next;
		delete tmp->m;
		delete tmp;
	}
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx > INV_SIZE || !inventory[idx])
		return ;
	if (!ground)
		ground = new_lst(inventory[idx]);
	else
		lst_append(inventory[idx]);
	inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if ((idx >= 0 && idx < 4) && inventory[idx])
	{
		inventory[idx]->use(target);
	}
}
