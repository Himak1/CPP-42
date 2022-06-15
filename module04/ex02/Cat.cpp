/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:42:21 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/15 16:34:41 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "It is a cat" << std::endl;
	type = "Cat";
}

Cat::Cat( const Cat & src )
{
	std::cout << "A cat has been copied" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "A cat has been deconstructed" << std::endl;
}

Cat &	Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
