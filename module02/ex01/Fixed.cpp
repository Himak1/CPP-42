/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/19 17:03:41 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/25 15:34:47 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <tgmath.h>
 
// Setting the frac_bits member
const int	Fixed::_frac_bits = 8;

// Default Constructor
Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

// Int Constuctor
Fixed::Fixed( int const int_value ) : _value(int_value) {
	std::cout << "Int constructor called" << std::endl;
	_value = _value << _frac_bits;
}

// Float Constuctor
Fixed::Fixed( float const float_value ) {
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(float_value * (1 << _frac_bits));
}

// Copy Constructor
Fixed::Fixed( Fixed const& src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

// Copy Assignment Overload
Fixed&	Fixed::operator=( Fixed const& rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

// ostream operator overload
std::ostream& operator<<( std::ostream& o, Fixed const& rhs) {
	o << rhs.toFloat();
	return (o);
}

// Destructor
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

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
