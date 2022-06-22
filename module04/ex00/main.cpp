/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:55:29 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/22 12:50:03 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_i = new WrongCat();
	std::cout << wrong_i->getType() << " " << std::endl;
	wrong_i->makeSound(); //will output the cat sound!
	wrong_meta->makeSound();

	// assignment operator compiler test
	/*
	std::cout << std::endl;
	Dog	dog;
	Cat	cat;

	dog = cat;
	dog.makeSound();
	std::cout << dog.getType() << std::endl;
	std::cout << std::endl;
	*/
	return (0);
}