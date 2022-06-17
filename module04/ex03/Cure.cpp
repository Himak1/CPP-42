/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 16:48:16 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/17 17:54:18 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// -------- Constructors and Destructors -------- //

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure( const Cure& src ) : AMateria(src)
{
}

Cure::~Cure()
{
}

// -------- Methods -------- //

AMateria*	Cure::clone() const
{
	return (new Cure());
}
