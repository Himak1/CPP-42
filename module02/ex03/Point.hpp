/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/01 12:09:21 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/01 17:50:59 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point( void );
		Point( float const x_float, float const y_float );
		Point( Point const& src );
		~Point();

		Point&	operator=( Point const& rhs );

		float	getX( void ) const;
		float	getY( void ) const;
	private:
		Fixed	_x;
		Fixed	_y;
};

std::ostream&			operator<<( std::ostream& o, Point const& i );

bool	bsp( Point const a, Point const b, Point const c, Point const point );

#endif