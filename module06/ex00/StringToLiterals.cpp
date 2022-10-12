/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   StringToLiterals.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 15:54:51 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/12 13:53:06 by jhille        ########   odam.nl         */
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

StringToLiterals&	StringToLiterals::operator=( StringToLiterals const& rhs )
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

std::ostream &	operator<<( std::ostream& o, StringToLiterals const& i )
{
	o	<< std::fixed
		<< "char: " << i.getCharStrm() << "\n"
		<< "int: " << i.getIntStrm() << "\n"
		<< "float: " << i.getFloatStrm() << 'f';
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::ostream&	StringToLiterals::getCharStrm(std::ostream&)
{
	std::ostream	o;

	if (charSet == SET)
		o << charValue;
	else if (charSet == NONDISPLAY)
		o << "Non displayable";
	else
		o << "impossible";
	return (o);
}

std::ostream&	StringToLiterals::getIntStrm()
{
	std::ostream	o;

	if (intSet == SET)
		o << intValue;
	else
		o << "impossible";
}

std::ostream&	StringToLiterals::getFloatStrm()
{
	std::ostream	o;

	if (floatSet == SET)
		o << floatValue;
	else
		o << "impossible";
	return (o);
}

void	StringToLiterals::assignFromChar()
{
	intValue = static_cast<int>(charValue);
//	intSet = true;
	floatValue = static_cast<float>(charValue);
//	floatSet = true;
	doubleValue = static_cast<double>(charValue);

}

int	StringToLiterals::setChar( const char *str )
{
	if (strlen(str) == 1 && (str[0] >= 32 && str[0] <= 127))
	{
		charValue = str[0];
		charSet = true;
		return (1);
	}
	return (0);
}

int	StringToLiterals::setInt( const char *str )
{
	char	*ptr = NULL;
	long	c = strtol(str, &ptr, 10);

	intValue = c;
	intSet = true;
	return (1);
}

int	StringToLiterals::literalType(const char *str)
{
	if (setChar(str) == 1)
		assignFromChar();
	// else if (setInt(str) == 1)
	// 	assignFromInt()
	else
		return (-1);
	return (0);
}
