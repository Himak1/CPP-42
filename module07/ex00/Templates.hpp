/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Templates.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 13:45:26 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/18 16:52:13 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template< typename T >
void	swap( T& x, T& y )
{
	T	tmp = x;
	x = y;
	y = tmp;
}

template< typename T >
T	min( const T x, const T y )
{
	return ( x <= y ? x : y);
}

template< typename T >
T	max( const T x, const T y )
{
	return ( x >= y ? x : y);
}

#endif
