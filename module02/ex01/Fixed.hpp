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
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	private:
		int					value;
		static const int	frac_bits;
};

#endif