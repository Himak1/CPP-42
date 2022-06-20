/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 16:48:16 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/20 16:29:52 by jhille        ########   odam.nl         */
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

std::string const&	Ice::getType() const
{
	return (type);
}

AMateria*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " 
				<< target.getName() 
				<< " *" 
				<< std::endl;
}
