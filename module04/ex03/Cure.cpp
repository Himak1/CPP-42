/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 16:48:16 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/20 16:29:22 by jhille        ########   odam.nl         */
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

std::string const&	Cure::getType() const
{
	return (type);
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals "
				<< target.getName()
				<< "'s wounds *"
				<< std::endl;
}
