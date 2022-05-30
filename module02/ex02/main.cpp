/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/25 16:03:01 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/30 15:29:43 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int	main( void ) {
	Fixed	a( 42.42f );
	Fixed	b( 42.25f );

	if (a > b)
		std::cout << a << " is bigger than " << b << std::endl;
	if (b < a)
		std::cout << b << " is smaller than " << a << std::endl;

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
	std::cout << t4 << " / " << t5 << " = " << (t4 / t5) << std::endl;
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
