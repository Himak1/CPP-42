/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongWrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:42:21 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/13 15:35:57 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "It is a Wrongcat" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "A WrongCat has been copied" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "A WrongCat has been deconstructed" << std::endl;
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

