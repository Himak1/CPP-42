/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:42:21 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/02 15:57:35 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "It is a dog" << std::endl;
	type = "Dog";
	brain = new Brain;
}

Dog::Dog( const Dog & src ) : Animal()
{
	std::cout << "A dog has been copied" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "A dog has been deconstructed" << std::endl;
	delete brain;
}

Dog &	Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}
