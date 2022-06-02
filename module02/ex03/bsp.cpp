/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/01 13:11:00 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/02 16:27:08 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

Point	crossProductHack( Point p1, Point p2) {
	Point	product;

	product = (p1.getX() * p2.getY()) - (p1.getY() * p2.getX());
	return (product);
}

bool	side( Point p1, Point p2, Point p3) {
	Fixed	value;

	//value = (p2.getY() - p1.getY()) * (p3.getX() = p1.getX())
	//		+ (-p2.getX() + p1.getX()) * (p3.getY() - p1.getY());

	
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

	sides[0] = side(a, b, point);
	sides[1] = side(b, c, point);
	sides[2] = side(c, a, point);
	
	std::cout << "a - b : " << sides[0] << std::endl;
	std::cout << "b - c : " << sides[1] << std::endl;
	std::cout << "c - a : " << sides[2] << std::endl;
	return (sides[0] && sides[1] && sides[2]);
}







































/*
Fixed	sign( Point p1, Point p2, Point p3 ) {
	return ((p1.getX() - p3.getX()) *
			(p2.getY() - p3.getY()) *
			(p2.getX() - p3.getX()) *
			(p1.getY() - p3.getY()));
}

bool	bsp( Point const a, Point const b, Point const c, Point const point ) {
	std::cout << "a:     " << a << std::endl;
	std::cout << "b:     " << b << std::endl;
	std::cout << "c:     " << c << std::endl;
	std::cout << "point: " << point << std::endl;

	Fixed	d1 = sign(point, a, b);
	Fixed	d2 = sign(point, b, c);
	Fixed	d3 = sign(point, b, a);

	bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}


bool	bsp( Point const a, Point const b, Point const c, Point const point ) {
	std::cout << "a:     " <<  a << std::endl;
	std::cout << "b:     " << b << std::endl;
	std::cout << "c:     " << c << std::endl;
	std::cout << "point: " << point << std::endl;

	Fixed	w1;
	Fixed	w2;
	float	ca_y = c.getY() - a.getY();
	float	pa_y = point.getY() - a.getY();
	float	ba_y = b.getY() - a.getY();
	float	ba_x = b.getX() - a.getX();
	float	ca_x = c.getX() - a.getX();

	w1 = ( (a.getX() * ca_y) + (pa_y * ca_x) - (point.getX() * ca_y) ) /
		( (ba_y * ca_x) - (ba_x * ca_y) );

	if (ca_y != 0)
		w2 = (pa_y - (w1.toFloat() * ba_y)) / ca_y;
	else
		w2 = (pa_y - w1.toFloat() * ba_y) / 1;
	std::cout << "w1: " << w1 << std::endl;
	std::cout << "w2: " << w2 << std::endl;
	if (w1 >= 0 && w2 >= 0)
		return (true);
	return (false);
}
*/
/*
bool	bsp( Point const a, Point const b, Point const c, Point const point ) {
	std::cout << "a:     " <<  a << std::endl;
	std::cout << "b:     " << b << std::endl;
	std::cout << "c:     " << c << std::endl;
	std::cout << "point: " << point << std::endl;

	Fixed	w1;
	Fixed	w2;

	w1 = ( (a.getX() * (c.getY() - a.getY()))
			+ ((point.getY() - a.getY()) * (c.getX() - a.getX())) 
			- (point.getX() * (c.getY() - a.getY())) ) /
			( ((b.getY() - a.getY()) * (c.getX() - a.getX()))
			- ((b.getX() - a.getX()) * (c.getY() - a.getY())) );

	w2 = (point.getY() - a.getY() - (w1.toFloat() * (b.getY() - a.getY()))) /
		(c.getY() - a.getY());
	
	
	std::cout << "w1: " << w1 << std::endl;
	std::cout << "w2: " << w2 << std::endl;
	if (w1 >= 0 && w2 >= 0)
		return (true);
	return (false);
}
*/