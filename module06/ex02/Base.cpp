/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 17:35:19 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/17 17:32:40 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "Base.hpp"

#include <iostream>

/* #region ------------------ Base ------------------ */

Base::~Base()
{
}

/* #endregion */

/* #region ------------------ A ------------------ */

A::A()
{
}

A::~A()
{
}

/* #endregion */

/* #region ------------------ B ------------------ */

B::B()
{
}

B::~B()
{
}

/* #endregion */

/* #region ------------------ C ------------------ */

C::C()
{
}

C::~C()
{
}

/* #endregion */

/* #region ------------------ Other Funcs ------------------ */

Base*	generate( void )
{
	int	select;

	srand(time(NULL));
	select = rand() % 3;
	std::cout << select << std::endl;
	switch (select)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (NULL);
}

void	identify(Base* p)
{
	A*	p1 = dynamic_cast<A*>(p);
	B*	p2 = dynamic_cast<B*>(p);
	C*	p3 = dynamic_cast<C*>(p);

	if (p1)
		std::cout << "class type: A" << std::endl;
	else if (p2)
		std::cout << "class type: B" << std::endl;
	else if (p3)
		std::cout << "class type: C" << std::endl;
	else
		std::cout << "argument is not A, B or C type" << std::endl;
}

void	identify(Base& p)
{
	bool	isA = true;
	bool	isB = true;
	bool	isC = true;

	try
	{
		A&	p1 = dynamic_cast<A&>(p);
		(void)p1;
	}
	catch (std::exception &e)
	{
		isA = false;
	}
	try
	{
		B&	p2 = dynamic_cast<B&>(p);
		(void)p2;
	}
	catch (std::exception &e)
	{
		isB = false;
	}
	try
	{
		C&	p3 = dynamic_cast<C&>(p);
		(void)p3;
	}
	catch(const std::exception& e)
	{
		isC = false;
	}
	if (isA)
		std::cout << "class type: A" << std::endl;
	else if (isB)
		std::cout << "class type: B" << std::endl;
	else if (isC)
		std::cout << "class type: C" << std::endl;
	else
		std::cout << "argument is not A, B or C type" << std::endl;
}

/* #endregion */
