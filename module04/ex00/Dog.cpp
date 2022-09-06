/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:42:21 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/06 14:56:14 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "It is a dog" << std::endl;
	type = "Dog";
}

Dog::Dog( const Dog& src ) : Animal()
{
	std::cout << "A dog has been copied" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "A dog has been deconstructed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}
