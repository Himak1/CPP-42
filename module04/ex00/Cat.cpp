/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:42:21 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/06 14:56:24 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "It is a cat" << std::endl;
	type = "Cat";
}

Cat::Cat( const Cat& src ) : Animal()
{
	std::cout << "A cat has been copied" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "A cat has been deconstructed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
