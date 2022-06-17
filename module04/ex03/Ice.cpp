/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 16:48:16 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/17 17:35:18 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// -------- Constructors and Destructors -------- //

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice( const Ice& src ) : AMateria(src)
{
}

Ice::~Ice()
{
}

// -------- Methods -------- //

AMateria*	Ice::clone() const
{
	return (new Ice());
}
