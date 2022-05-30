/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/25 16:03:01 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/30 15:33:38 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int	main( void ) {
	Fixed	x( 42.42f );
	Fixed	y( 42.25f );

	if (x > y)
		std::cout << x << " is bigger than " << y << std::endl;
	if (y < x)
		std::cout << y << " is smaller than " << x << std::endl;

	Fixed	t2( 10.50f );
	Fixed	t3( 5.25f );

	std::cout << t2 << " + " << t3 << " = " << (t2 + t3) << std::endl;
	std::cout << t2 << " - " << t3 << " = " << (t2 - t3) << std::endl;
	std::cout << t2 << " * " << t3 << " = " << (t2 * t3) << std::endl;
	std::cout << t2 << " / " << t3 << " = " << (t2 / t3) << std::endl << std::endl;

	Fixed	t4( 9.4f );
	Fixed	t5( 3.5f );

	std::cout << t4 << " + " << t5 << " = " << (t4 + t5) << std::endl;
	std::cout << t4 << " - " << t5 << " = " << (t4 - t5) << std::endl;
	std::cout << t4 << " * " << t5 << " = " << (t4 * t5) << std::endl;
	std::cout << t4 << " / " << t5 << " = " << (t4 / t5) << std::endl << std::endl;

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
