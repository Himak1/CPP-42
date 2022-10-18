/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 16:28:36 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/18 16:47:00 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template< typename T >
void	iter( const T* address, const int length, void(f)(const T&))
{
	for (int i = 0; i < length; i++)
	{
		f(address[i]);
	}
}

#endif
