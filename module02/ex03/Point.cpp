/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/01 12:10:35 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/07 14:05:37 by jhille        ########   odam.nl         */
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

Point::~Point( void )
{
}

// -------- Assignment Overloads -------- //

Point&				Point::operator=( Point const& rhs ) {
	if ( this != &rhs )
	{
		this->_x = rhs._x;
		this->_y = rhs._y;
	}
	return *this;
}

// -------- ostream Operator Overload -------- //

std::ostream&			operator<<( std::ostream& o, Point const& i )
{
	o << "["
		<< i.getX()
		<< ", "
		<< i.getY()
		<< "]";
	return o;
}

// -------- Arithmetic Overload -------- //

Point	Point::operator-( Point const& rhs ) {
	Point	result;

	result._x = this->_x - rhs._x;
	result._y = this->_y - rhs._y;
	return (result);
}

// -------- Methods -------- //

void	Point::setX( Fixed x ) {
	this->_x = x;
}
void	Point::setY( Fixed y ) {
	this->_y = y;
}

Fixed	Point::getX( void ) const {
	return (_x);
}

Fixed	Point::getY( void ) const {
	return (_y);
}

float	Point::toFloatX( void ) const {
	return (this->_x.toFloat());
}

float	Point::toFloatY( void ) const {
	return (this->_y.toFloat());
}
