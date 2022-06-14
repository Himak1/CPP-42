/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 14:09:43 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/14 14:10:19 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// -------- Constructors and Destructors -------- //

Brain::Brain()
{
}

Brain::Brain( const Brain & src )
{
}

Brain::~Brain()
{
}

// -------- Operator Overloads -------- //

Brain &				Brain::operator=( Brain const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}
