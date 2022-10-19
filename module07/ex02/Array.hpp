/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 17:06:19 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/19 17:05:21 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template< typename T >
class Array
{
	public:
		Array();
		Array( unsigned int length );
		~Array();
	
		unsigned int	size();
	private:
		T	*_arr;
};

#include "Array.tpp"
