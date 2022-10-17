/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 17:35:19 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/17 16:38:30 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "Base.hpp"

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

Base	*generate( void )
{
	int	select;

	srand(time(NULL));
	select = rand();
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

/* #endregion */
