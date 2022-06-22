/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 14:23:01 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/22 11:50:10 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// -------- Constructors and Destructors -------- //

AMateria::AMateria( std::string	const& type_param ) : type(type_param)
{
}

AMateria::AMateria( const AMateria& src )
{
	*this = src;
}

AMateria::~AMateria()
{
}

// -------- Operator Overloads -------- //

AMateria&	AMateria::operator=( AMateria const& rhs )
{
	if ( this != &rhs )
	{
	}
	return *this;
}

// -------- Methods -------- //

std::string const&	AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "generic use action on " << target.getName() << std::endl;
}
