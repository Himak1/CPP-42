/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/25 16:03:01 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/25 17:16:04 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	greater_than(Fixed& x, Fixed& y)
{
	if (x > y)
		std::cout << "   " << x << " > " << y << std::endl;
	else
		std::cout << "!! " << x << " > " << y << std::endl;
}

void	smaller_than(Fixed& x, Fixed& y)
{
	if (x < y)
		std::cout << "   " << x << " < " << y << std::endl;
	else
		std::cout << "!! " << x << " < " << y << std::endl;
}

int	main( void ) {
	Fixed	a( 42.42f );
	Fixed	b( 42.25f );


	greater_than(a, b);
	smaller_than(a, b);



	return (0);
}

/*
int	main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
*/
