/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/19 17:03:41 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/20 15:30:53 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Setting the frac_bits member
const int	Fixed::frac_bits = 8;

// Default Constructor
Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

// Int Constuctor
Fixed::Fixed( int const int_value ) {
	setRawBits(int_value);
}

// Float Constuctor
Fixed::Fixed( float const float_value ) {
	setRawBits(float_value);
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

// Destructor
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member fuction called" << std::endl;
	value = raw;
}
