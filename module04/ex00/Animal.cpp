/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:19:12 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/13 13:40:34 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// -------- Constructors and Destructors -------- //

Animal::Animal()
{
	std::cout << "A default animal has been created" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "An animal has been copied" << std::endl;
}

Animal::~Animal()
{
	std::cout << "An animal has been deconstructed" << std::endl;
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

