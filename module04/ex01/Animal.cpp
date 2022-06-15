/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:19:12 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/15 16:36:36 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// -------- Constructors and Destructors -------- //

Animal::Animal()
{
	std::cout << "An animal has been created" << std::endl;
	brain = new Brain;
}

Animal::Animal( const Animal & src )
{
	std::cout << "An animal has been copied" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "An animal has been deconstructed" << std::endl;
	delete brain;
}

// -------- Operator Overloads -------- //

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

// -------- Methods -------- //

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
}
