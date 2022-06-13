/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongWrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:19:12 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/13 15:30:14 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// -------- Constructors and Destructors -------- //

WrongAnimal::WrongAnimal()
{
	std::cout << "A WrongAnimal has been created" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "A WrongAnimal has been copied" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A WrongAnimal has been deconstructed" << std::endl;
}

// -------- Operator Overloads -------- //

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

// -------- Methods -------- //

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "error 404" << std::endl;
}