/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/23 11:53:26 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/30 14:18:30 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( Fixed const& src );
		Fixed( int const int_value );
		Fixed( float const float_value );
		~Fixed( void );

		Fixed&	operator=( Fixed const& rhs );
		bool	operator>( Fixed const& rhs );
		bool	operator<( Fixed const& rhs );
		bool	operator>=( Fixed const& rhs );
		bool	operator<=( Fixed const& rhs );
		bool	operator==( Fixed const& rhs );
		bool	operator!=( Fixed const& rhs );

		Fixed	operator+( Fixed const& rhs );
		Fixed	operator-( Fixed const& rhs );
		Fixed	operator*( Fixed const& rhs );
		Fixed	operator/( Fixed const& rhs );

		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++( int );
		Fixed	operator--( int );

		static Fixed&	min( Fixed& a, Fixed& b );
		static Fixed&	min( Fixed const& a, Fixed const& b );
		static Fixed&	max( Fixed& a, Fixed& b );
		static Fixed&	max( Fixed const& a, Fixed const& b );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					_value;
		static const int	_frac_bits;
};

static Fixed	&min( Fixed const& a, Fixed const& b );
static Fixed	&max( Fixed const& a, Fixed const& b );

std::ostream& operator<<( std::ostream& o, Fixed const& rhs);

#endif