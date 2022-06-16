/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 17:20:05 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/16 17:23:07 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// -------- Constructors and Destructors -------- //

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
}

MateriaSource::~MateriaSource()
{
}

// -------- Methods -------- //

void	MateriaSource::learnMateria( AMateria* matToStore )
{
	
}

// -------- Operator Overloads -------- //

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}
