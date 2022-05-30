/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/23 11:53:26 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/30 15:21:07 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( int const int_value );
		Fixed( float const float_value );
		Fixed( Fixed const& src );
		~Fixed( void );

		Fixed&	operator=( Fixed const& rhs );

		bool	operator>( Fixed const& rhs ) const;
		bool	operator<( Fixed const& rhs ) const;
		bool	operator>=( Fixed const& rhs ) const;
		bool	operator<=( Fixed const& rhs ) const;
		bool	operator==( Fixed const& rhs ) const;
		bool	operator!=( Fixed const& rhs ) const;

		Fixed	operator+( Fixed const& rhs );
		Fixed	operator-( Fixed const& rhs );
		Fixed	operator*( Fixed const& rhs );
		Fixed	operator/( Fixed const& rhs );

		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++( int );
		Fixed	operator--( int );

		static Fixed&	min( Fixed& a, Fixed& b );
		static Fixed const&	min( Fixed const& a, Fixed const& b );
		static Fixed&	max( Fixed& a, Fixed& b );
		static Fixed const&	max( Fixed const& a, Fixed const& b );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					_value;
		static const int	_frac_bits;
};

Fixed const&	min( Fixed const& a, Fixed const& b );
Fixed const&	max( Fixed const& a, Fixed const& b );
Fixed&	min( Fixed& a, Fixed& b );
Fixed&	max( Fixed& a, Fixed& b );

std::ostream& operator<<( std::ostream& o, Fixed const& rhs);

#endif