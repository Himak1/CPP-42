/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:42:21 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/06 14:31:56 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "It is a cat" << std::endl;
	type = "Cat";
	brain = new Brain;
}

Cat::Cat( const Cat & src ) : Animal()
{
	std::cout << "A cat has been copied" << std::endl;
	brain = new Brain;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "A cat has been deconstructed" << std::endl;
	delete brain;
}

Cat &	Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	*brain = *rhs.brain;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
