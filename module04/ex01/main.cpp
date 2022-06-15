/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:55:29 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/15 16:48:20 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;


	const Animal*	array[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}

	for (int i = 0; i < 10; i++)
	{
		delete array[i];
	}
	return 0;
}
