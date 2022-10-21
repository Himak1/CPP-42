/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 17:06:19 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/21 14:44:04 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>

template< typename T >
class Array
{
	public:
		Array();
		Array( const unsigned int length );
		Array( const Array& src );
		~Array();
	
		Array&	operator=( const Array<T>& rhs );
		T&		operator[]( const unsigned int& index ) const;
		unsigned int	size() const;
		class IndexOutOfBoundsException : public std::exception
		{
			public:
				const char* what() const throw();
		};
	private:
		unsigned int	_length;
		T	*_arr;
};

#include "Array.tpp"
