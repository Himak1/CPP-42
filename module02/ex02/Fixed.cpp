/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/19 17:03:41 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/26 17:18:00 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <tgmath.h>
 
// Setting the frac_bits member
const int	Fixed::_frac_bits = 8;

// -------- Constructors and Destructor -------- //

Fixed::Fixed() : _value(0) {
}

Fixed::Fixed( int const int_value ) : _value(int_value) {
	_value = _value << _frac_bits;
}

Fixed::Fixed( float const float_value ) {
	_value = roundf(float_value * (1 << _frac_bits));
}

Fixed::Fixed( Fixed const& src ) {
	*this = src;
}

Fixed::~Fixed() {
}


// -------- Operator Overloads -------- //

Fixed&	Fixed::operator=( Fixed const& rhs ) {
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>( Fixed const& rhs) {
	return (this->_value > rhs._value);
}

bool	Fixed::operator<( Fixed const& rhs) {
	return (this->_value < rhs._value);
}

bool	Fixed::operator>=( Fixed const& rhs ) {
	return (this->_value >= rhs._value);
}

bool	Fixed::operator<=( Fixed const& rhs ) {
	return (this->_value <= rhs._value);
}

bool	Fixed::operator==( Fixed const& rhs ) {
	return (this->_value == rhs._value);
}

bool	Fixed::operator!=( Fixed const& rhs ) {
	return (this->_value != rhs._value);
}

Fixed	Fixed::operator+( Fixed const& rhs ) {
	Fixed	result( this->_value + rhs._value );

	result._value = result._value >> _frac_bits;
	return (result);
}

Fixed	Fixed::operator-( Fixed const& rhs ) {
	Fixed	result( this->_value - rhs._value );

	result._value = result._value >> _frac_bits;
	return (result);
}

Fixed	Fixed::operator*( Fixed const& rhs ) {
	Fixed result( this->_value * rhs._value );

	result._value = result._value >> (_frac_bits * 2);
	return (result);
}

Fixed	Fixed::operator/( Fixed const& rhs ) {
	Fixed result;

	result._value = (this->_value << _frac_bits) / (rhs._value << _frac_bits) << 7;
	return (result);
}

std::ostream& operator<<( std::ostream& o, Fixed const& rhs) {
	o << rhs.toFloat();
	return (o);
}

// -------- Methods -------- //

int	Fixed::getRawBits( void ) const {
	return (this->_value);
}

void	Fixed::setRawBits( int const raw ) {
	_value = raw;
}

float	Fixed::toFloat( void ) const {
	return ((float)_value / (float)(1 << _frac_bits));
}

int	Fixed::toInt( void ) const {
	return (this->_value >> _frac_bits);
}

