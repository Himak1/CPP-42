/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 17:20:05 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/21 17:57:07 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// -------- Constructors and Destructors -------- //

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		storage[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource& src )
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (storage[i])
			delete storage[i];
	}
}

// -------- Methods -------- //

void	MateriaSource::learnMateria( AMateria* newMat )
{
	int	i;

	i = 0;
	while (i < 4 && storage[i] != NULL)
		i++;
	if (i < 4 && storage[i] == NULL)
		storage[i] = newMat;
}

AMateria*	MateriaSource::createMateria( std::string const& type)
{
	AMateria*	temp;
	int			i;

	i = 0;
	temp = NULL;
	while (i < 4 && storage[i] != NULL)
	{
		if (type == storage[i]->getType())
		{
			temp = storage[i]->clone();
			break ;
		}
		i++;
	}
	return (temp);
}

// -------- Operator Overloads -------- //

MateriaSource &				MateriaSource::operator=( MateriaSource const& rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i< 4; i++)
			this->storage[i] = rhs.storage[i];
	}
	return *this;
}
