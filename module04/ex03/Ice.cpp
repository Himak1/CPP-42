/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 16:48:16 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/16 16:48:42 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// -------- Constructors and Destructors -------- //

Ice::Ice()
{
}

Ice::Ice( const Ice & src )
{
}

Ice::~Ice()
{
}

Ice &				Ice::operator=( Ice const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Ice const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}
