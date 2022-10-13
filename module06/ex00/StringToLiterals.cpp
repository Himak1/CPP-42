/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   StringToLiterals.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 15:54:51 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/13 14:06:29 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <climits>
#include <cfloat>
#include "StringToLiterals.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

StringToLiterals::StringToLiterals()
	: charSet(NOTSET), intSet(NOTSET), floatSet(NOTSET), doubleSet(NOTSET)
{
}

StringToLiterals::StringToLiterals( const StringToLiterals& src )
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
	o << o;
	return o;
}

/*
** --------------------------------- PRINT METHODS ----------------------------------
*/


void	StringToLiterals::printChar()
{
	std::cout << "char: ";
	if (charSet == SET)
		std::cout << charValue;
	else if (charSet == NONDISPLAY)
		std::cout << "Non displayable";
	else
		std::cout << "impossible";
	std::cout << "\n";
}

void	StringToLiterals::printInt()
{
	std::cout << "int: ";
	if (intSet == SET)
		std::cout << intValue;
	else
		std::cout << "impossible";
	std::cout << "\n";
}

void	StringToLiterals::printFloat()
{
	std::cout << "float: ";
	std::cout.precision(1);
	if (floatSet == SET)
		std::cout << std::fixed << floatValue << "f";
	else
		std::cout << "impossible";
	std::cout << "\n";
}

void	StringToLiterals::printDouble()
{
	std::cout << "double: ";
	std::cout.precision(1);
	if (doubleSet == SET)
		std::cout << std::fixed << doubleValue;
	else
		std::cout << "impossible";
	std::cout << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	StringToLiterals::assignFromChar()
{
	intValue = static_cast<int>(charValue);
	intSet = SET;
	floatValue = static_cast<float>(charValue);
	floatSet = SET;
	doubleValue = static_cast<double>(charValue);
	doubleSet = SET;

}

void	StringToLiterals::assignFromInt()
{
	if (!(intValue >= CHAR_MIN && intValue <= CHAR_MAX))
		charSet = ERROR;
	else if (!isprint(intValue))
		charSet = NONDISPLAY;
	else
	{
		charValue = static_cast<int>(intValue);
		charSet = SET;
	}
	floatValue = static_cast<float>(intValue);
	floatSet = SET;
	doubleValue = static_cast<double>(intValue);
	doubleSet = SET;
}

void	StringToLiterals::assignFromFloat()
{
	if (!(floatValue >= CHAR_MIN && floatValue <= CHAR_MAX))
		charSet = ERROR;
	else if (!isprint(floatValue))
		charSet = NONDISPLAY;
	else
	{
		charValue = static_cast<char>(floatValue);
		charSet = SET;
	}
	intValue = static_cast<int>(floatValue);
	intSet = SET;
	doubleValue = static_cast<double>(floatValue);
	doubleSet = SET;
}

void	StringToLiterals::assignFromDouble()
{
	if (!(doubleValue >= CHAR_MIN && doubleValue <= CHAR_MAX))
		charSet = ERROR;
	else if (!isprint(doubleValue))
		charSet = NONDISPLAY;
	else
	{
		charValue = static_cast<char>(doubleValue);
		charSet = SET;
	}
	if (doubleValue < INT_MIN || doubleValue > INT_MAX)
		intSet = ERROR;
	else
	{
		intValue = static_cast<int>(doubleValue);
		intSet = SET;
	}
	if (doubleValue < FLT_MIN || doubleValue > FLT_MAX)
		floatSet = ERROR;
	else
	{
		floatValue = static_cast<float>(doubleValue);
		floatSet = SET;
	}
}

int	StringToLiterals::setChar( std::string const& str )
{
	if (str.length() == 1 && (isprint(str[0]) && !isdigit(str[0])))
	{
		charValue = str[0];
		charSet = SET;
		return (1);
	}
	return (0);
}

int	StringToLiterals::setInt( std::string const& str )
{
	char	*ptr;
	long	c;

	ptr = NULL;
	errno = 0;
	c = strtol(str.c_str(), &ptr, 10);
	if (errno != 0 || ptr == str)
		return (0);
	else if (str.find_first_not_of("-0123456789") != std::string::npos)
		return (0);
	if (c < INT_MIN || c > INT_MAX)
		return (0);
	intValue = c;
	intSet = SET;
	return (1);
}

int	StringToLiterals::setFloat( std::string const& str )
{
	char	*ptr;
	float	f;

	errno = 0;
	f = strtof(str.c_str(), &ptr);
	if (errno != 0 || ptr == str)
		return (0);
	else if (str.back() != 'f')
		return (0);
	floatValue = f;
	floatSet = SET;
	return (1);
}

int	StringToLiterals::setDouble( std::string const& str )
{
	char	*ptr;
	double	d;

	errno = 0;
	d = strtof(str.c_str(), &ptr);
	if (errno != 0 || ptr == str)
		return (0);
	doubleValue = d;
	doubleSet = SET;
	return (1);
}

int	StringToLiterals::literalType(const char *str)
{
	if (setChar(str) == 1)
		assignFromChar();
	else if (setInt(str) == 1)
		assignFromInt();
	else if (setFloat(str))
		assignFromFloat();
	else if (setDouble(str))
		assignFromDouble();
	else
		return (-1);
	return (0);
}
