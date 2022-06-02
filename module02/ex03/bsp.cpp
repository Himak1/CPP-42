/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/01 13:11:00 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/02 14:22:43 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

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

/*
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