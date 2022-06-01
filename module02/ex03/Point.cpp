/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/01 12:10:35 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/01 12:19:56 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// -------- Constructors and Destructor -------- //

Point::Point() : _x(0), _y(0) {
}

Point::Point( float const x_float, float const y_float ) {
	this->_x = Fixed(x_float);
	this->_y = Fixed(y_float);
}

Point::Point( Point const& src ) {
	*this = src;
}

Point::~Point()
{
}

Point&				Point::operator=( Point const& rhs )
{
	if ( this != &rhs )
	{
		this->_x = rhs.();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Point const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}
