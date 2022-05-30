/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/19 17:03:41 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/30 15:21:03 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <tgmath.h>
 
// Setting the frac_bits member
const int	Fixed::_frac_bits = 8;

// -------- Constructors and Destructor -------- //

Fixed::Fixed( void ) : _value(0) {
	std::cout << "Default" << std::endl;
}

Fixed::Fixed( int const int_value ) : _value(int_value) {
	_value = _value << _frac_bits;
	std::cout << "Int" << std::endl;
}

Fixed::Fixed( float const float_value ) {
	_value = roundf(float_value * (1 << _frac_bits));
	std::cout << "Float" << std::endl;
}

Fixed::Fixed( Fixed const& src ) {
	*this = src;
}

Fixed::~Fixed( void ) {
}

Fixed&	Fixed::operator=( Fixed const& rhs ) {
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

// -------- Comparison Operator Overloads -------- //

bool	Fixed::operator>( Fixed const& rhs) const {
	return (this->_value > rhs._value);
}

bool	Fixed::operator<( Fixed const& rhs) const{
	return (this->_value < rhs._value);
}

bool	Fixed::operator>=( Fixed const& rhs ) const{
	return (this->_value >= rhs._value);
}

bool	Fixed::operator<=( Fixed const& rhs ) const{
	return (this->_value <= rhs._value);
}

bool	Fixed::operator==( Fixed const& rhs ) const{
	return (this->_value == rhs._value);
}

bool	Fixed::operator!=( Fixed const& rhs ) const{
	return (this->_value != rhs._value);
}

// -------- Arithmetic Operator Overloads -------- //

Fixed	Fixed::operator+( Fixed const& rhs ) {
	Fixed	result;

	result._value = (this->_value + rhs._value);
	return (result);
}

Fixed	Fixed::operator-( Fixed const& rhs ) {
	Fixed	result;

	result._value = (this->_value - rhs._value);
	return (result);
}

Fixed	Fixed::operator*( Fixed const& rhs ) {
	Fixed result;

	result._value = (this->_value * rhs._value);
	return (result);
}

Fixed	Fixed::operator/( Fixed const& rhs ) {
	Fixed		result;
	long long	dividend;

	dividend = this->_value << _frac_bits;
	result._value = (dividend / rhs._value);
	return (result);
}

// -------- Increment/Decrement Operator Overloads -------- //

Fixed&	Fixed::operator++() {
	this->_value++;
	return (*this);
}

Fixed&	Fixed::operator--() {
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++( int ) {
	Fixed	copy = *this;

	++*this;
	return(copy);
}

Fixed	Fixed::operator--( int ) {
	Fixed	copy = *this;

	--*this;
	return(copy);
}

// -------- ostream Overload -------- //

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

Fixed&	Fixed::min( Fixed& a, Fixed& b ) {
	if (a < b)
		return (a);
	return (b);
}

Fixed const&	Fixed::min( Fixed const& a, Fixed const& b ) {
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max( Fixed& a, Fixed& b ) {
	if (a > b)
		return (a);
	return (b);
}

Fixed const&	Fixed::max( Fixed const& a, Fixed const& b ) {
	if (a > b)
		return (a);
	return (b);
}

// -------- Non-Method functions -------- //

Fixed&	min( Fixed& a, Fixed& b ) {
	return (Fixed::min(a, b));
}

Fixed&	max( Fixed& a, Fixed& b ) {
	return (Fixed::max(a ,b));
}

Fixed const&	min( Fixed const& a, Fixed const& b ) {
	return (Fixed::min(a, b));
}

Fixed const&	max( Fixed const& a, Fixed const& b ) {
	return (Fixed::max(a, b));
}