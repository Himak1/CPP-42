/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/23 11:53:26 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/27 14:59:32 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed( Fixed const& src );
		Fixed( int const int_value );
		Fixed( float const float_value );
		~Fixed();

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

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					_value;
		static const int	_frac_bits;
};

std::ostream& operator<<( std::ostream& o, Fixed const& rhs);

#endif