/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 12:40:08 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/21 16:16:41 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/* #region ---------------- Constructor & Destructor ---------------- */

template< typename T >
Array<T>::Array()
	: _length(0)
{
	_arr = new T[0];
}

template< typename T >
Array<T>::Array( const unsigned int length )
	: _length(length)
{
	_arr = new T[length];
	for (unsigned int i = 0; i < length; i++)
		_arr[i] = 0;
}

template< typename T >
Array<T>::Array( const Array& src )
	: _arr(NULL)
{
	*this = src;
}

template< typename T >
Array<T>::~Array()
{
	delete[] _arr;
}

/* #endregion */

/* #region ---------------- Operator Overloads ---------------- */

template < typename T >
Array<T>&  Array<T>::operator=( const Array<T>& rhs )
{
	if (this != &rhs)
	{
		_length = rhs._length;
		if (_arr)
			delete[] _arr;
		_arr = new T[_length];
		for (unsigned int i = 0; i < _length; i++)
			_arr[i] = rhs._arr[i];
	}
	return *this;
}

template< typename T >
T&	Array<T>::operator[]( const unsigned int& index ) const
{
	if (index >= _length)
		throw IndexOutOfBoundsException();
	return (_arr[index]);
}

/* #endregion */

/* #region ---------------- Methods ---------------- */

template< typename T >
unsigned int    Array<T>::size() const
{
	return (_length);
}

/* #endregion */

/* #region ---------------- Exceptions ---------------- */

template< typename T >
const char* Array<T>::IndexOutOfBoundsException::what() const throw()
{
	return ("index is out of array bounds");
}

/* #endregion */
