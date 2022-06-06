/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 15:44:15 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/06 13:58:04 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void) {
	Point	a( 0.0f, 2.0f );
	Point	b( 2.0f, -2.0f );
	Point	c( -2.0f, -2.0f );
	Point	point( 0.1f, 0.1f );

	std::cout << bsp(a, b, c, point) << std::endl;
	return (0);	
}