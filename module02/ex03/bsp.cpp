/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/01 13:11:00 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/06 13:43:41 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

Fixed	dp( Point const& p1, Point const& p2 ) {
	Fixed	x = p1.getX() * p2.getX();
	Fixed	y = p1.getY() * p2.getY();
	return (x + y);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point ) {
	std::cout << "a:     " << a << std::endl;
	std::cout << "b:     " << b << std::endl;
	std::cout << "c:     " << c << std::endl;
	std::cout << "point: " << point << std::endl;

	Point	v0;
	Point	v1;
	Point	v2;
	Fixed	dot00;
	Fixed	dot01;
	Fixed	dot02;
	Fixed	dot11;
	Fixed	dot12;

	v0 = (Point)c - a;
	v1 = (Point)b - a;
	v2 = (Point)point - a;
	dot00 = dp(v0, v0);
	dot01 = dp(v0, v1);
	dot02 = dp(v0, v2);
	dot11 = dp(v1, v1);
	dot12 = dp(v1, v2);

	Fixed	invDenom;
	Fixed	u;
	Fixed	v;

	invDenom = Fixed(1.0f) / (dot00 * dot11 - dot01 * dot01);
	u = (dot11 * dot02 - dot01 * dot12) * invDenom;
	v = (dot00 * dot12 - dot01 * dot02) * invDenom;
	return (u >= 0 && v >= 0 && (u + v < 1));
}
































/*

Point	crossProduct( Point p1, Point p2 ) {
	Point	product;

	product.setX( (p1.getX() * p2.getY()) - (p1.getY() * p2.getX()) );
	product.setY( (p1.getX() * p2.getY()) - (p1.getY() * p2.getX()) );
	return (product);
}

bool	sameSide( Point p1, Point p2, Point v1, Point v2 ) {
	Fixed	value;
	
	std::cout << crossProduct(v2-v1, p1-v1) << std::endl;
	std::cout << crossProduct(v2-v1, p2-v1) << std::endl;
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
	sides[1] = sameSide(point, b, a, c);
	sides[2] = sameSide(point, c, a, b);
	
	//std::cout << "a - b : " << sides[0] << std::endl;
	//std::cout << "b - c : " << sides[1] << std::endl;
	//std::cout << "c - a : " << sides[2] << std::endl;
	return (sides[0] && sides[1] && sides[2]);
}
*/