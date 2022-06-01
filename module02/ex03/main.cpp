/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 15:44:15 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/01 17:49:30 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void) {
	Point	a( -4.0f, 0.0f );
	Point	b( 0.0f, 6.0f );
	Point	c( 4.0f, 0.0f );
	Point	point( 2.1f, 2.0f );

	std::cout << bsp(a, b, c, point) << std::endl;
	return (0);	
}