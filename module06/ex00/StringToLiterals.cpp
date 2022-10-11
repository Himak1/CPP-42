/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   StringToLiterals.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 15:54:51 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/11 14:41:23 by jhille        ########   odam.nl         */
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

int	StringToLiterals::setChar( const char *str )
{
	if (strlen(str) == 1 && (str[0] >= 32 && str[0] <= 127))
	{
		charValue = str[0];
		charSet = true;
		return (1);
	}
	return (0)
}

int	StringToLiterals::setInt( const char *str )
{
	char	*ptr = NULL;
	long	c = strtol(str, &ptr, 10);

	//if (c == 0 && errno == )
	intValue = c;
	intSet = true;
	return (1);
}

int	literalType(const char *str)
{
	if (setChar(str) == 1)
		return (CHAR);
	else if (setInt(str) == 1)
		return (INT);
	else
		return (-1);
}
