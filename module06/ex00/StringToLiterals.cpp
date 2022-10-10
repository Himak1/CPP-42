/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   StringToLiterals.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 15:54:51 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/10 17:39:00 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "StringToLiterals.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

StringToLiterals::StringToLiterals()
	: charSet(false), intSet(false), floatSet(false), doubleSet(false)
{
}

StringToLiterals::StringToLiterals( const StringToLiterals & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

StringToLiterals::~StringToLiterals()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

StringToLiterals &				StringToLiterals::operator=( StringToLiterals const & rhs )
{
	if ( this != &rhs )
	{
		charValue = rhs.charValue;
		intValue = rhs.intValue;
		floatValue = rhs.floatValue;
		doubleValue = rhs.doubleValue;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, StringToLiterals const & i )
{
	o << "int: " 
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	StringToLiterals::setChar(char *str)
{
	char		*ptr = NULL;
	long int	c = strtol(str, &ptr, 10);

	if (c == 0 && errno == )
}

void	StringToLiterals::setDouble( double input )
{
	doubleValue = input;
	double
}
