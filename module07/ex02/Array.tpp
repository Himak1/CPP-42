/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 12:40:08 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/20 15:37:42 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/* #region ---------------- Constructor & Destructor ---------------- */

template< typename T >
Array<T>::Array()
    : _arr(NULL), _length(0)
{
}

template< typename T >
Array<T>::Array( const unsigned int length )
    : _length(length)
{
    if (length == 0)
        _arr = NULL;
    else
    {
        _arr = new T[length];
        for ( unsigned int i = 0; i < length; i++)
            _arr[i] = 0;
    }
}

template< typename T >
Array<T>::~Array()
{
    delete[] _arr;
}

/* #endregion */

/* #region ---------------- Operator Overloads ---------------- */

template< typename T >
T&	Array<T>::operator[]( const unsigned int& index) const
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
