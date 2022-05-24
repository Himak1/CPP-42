/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/19 17:03:41 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/24 17:25:05 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <tgmath.h>
 
// Setting the frac_bits member
const int	Fixed::frac_bits = 8;

// Default Constructor
Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

// Int Constuctor
Fixed::Fixed( int const int_value ) : value(int_value) {
	std::cout << "Int constructor called" << std::endl;
	value = value << frac_bits;
}

// Float Constuctor
Fixed::Fixed( float const float_value ) {
	//float	mantissa;

	std::cout << "Float constructor called" << std::endl;
	//value = (int)float_value;
	//mantissa = float_value << 9;
	//value = (int)roundf(1 << 8) * float_value;
	value = 
	std::cout << value << std::endl;
}

// Copy Constructor
Fixed::Fixed( const Fixed& src ) {
	std::cout << "Copy constructor called" << std::endl;
	value = src.getRawBits();
}

// Copy Assignment Overload
Fixed&	Fixed::operator=( Fixed const& rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->value = rhs.getRawBits();
	}
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
	return (this->value);
}

void	Fixed::setRawBits( int const raw ) {
	value = raw;
}

float	Fixed::toFloat( void ) const {
	float	copy;

	copy = 0;
	return (copy);
}

int	Fixed::toInt( void ) const {
	return (value >> frac_bits);
}
