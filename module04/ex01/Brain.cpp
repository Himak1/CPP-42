/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 14:09:43 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/14 15:20:35 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// -------- Constructors and Destructors -------- //

Brain::Brain()
{
}

Brain::Brain( const Brain & src )
{
	*this = src;
}

Brain::~Brain()
{
}

// -------- Operator Overloads -------- //

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 100; i++)
		{
			this->brain[i] = rhs.brain[i];
		}
	}
	return *this;
}
