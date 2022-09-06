/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 14:24:41 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/06 15:12:00 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	// Subject main
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);
	me->unequip(0);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	delete bob;
	delete me;
	// Subject main end

	// Copy assignment and equip overflow test
	Character	kerry("kerry");
	Character	john("john");

	tmp = src->createMateria("ice");
	kerry.equip(tmp);
	tmp = src->createMateria("cure");
	kerry.equip(tmp);
	kerry.unequip(1);
	john = kerry;

	tmp = src->createMateria("ice");
	john.equip(tmp);
	tmp = src->createMateria("ice");
	john.equip(tmp);
	tmp = src->createMateria("ice");
	john.equip(tmp);
	tmp = src->createMateria("ice");
	john.equip(tmp);
	tmp = src->createMateria("ice");
	john.equip(tmp);
	// Copy assignment test end

	// Copy assignment pointer test
	ICharacter* t1 = new Character("anna");
	ICharacter*	t2 = new Character("vasily");

	tmp = src->createMateria("ice");
	t1->equip(tmp);
	tmp = src->createMateria("cure");
	t2->equip(tmp);
	t2->unequip(0);

	*t2 = *t2;
	delete t2;
	delete t1;
	// Copy assignment pointer test end

	delete src;
}
