/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/01 13:11:00 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/02 17:35:32 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

Point	crossProduct( Point p1, Point p2 ) {
	Point	product;

	//product = (p1.getX() * p2.getY()) - (p1.getY() * p2.getX());
	product._x = (p1.getX() * p2.getY()) - (p1.getY() * p2.getX());
	product._y = (p1.getX() * p2.getY()) - (p1.getY() * p2.getX());
	return (product);
}

bool	sameSide( Point p1, Point p2, Point v1, Point v2 ) {
	Fixed	value;
	
	std::cout << crossProduct(v2-v1, p1-v1) << std::endl;
	if (value >= 0)
		return (true);
	else
		return (false);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point ) {
	std::cout << "a:     " << a << std::endl;
	std::cout << "b:     " << b << std::endl;
	std::cout << "c:     " << c << std::endl;
	std::cout << "point: " << point << std::endl;

	bool	sides[3];

	sides[0] = sameSide(point, a, b, c);
	sides[1] = sameSide(point b, a, c);
	sides[2] = sameSide(point, c, a, b);
	
	std::cout << "a - b : " << sides[0] << std::endl;
	std::cout << "b - c : " << sides[1] << std::endl;
	std::cout << "c - a : " << sides[2] << std::endl;
	return (sides[0] && sides[1] && sides[2]);
}
