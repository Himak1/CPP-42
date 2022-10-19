/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 12:40:08 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/19 17:08:32 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template< typename T >
Array::Array<T>()
    : _arr(NULL)
{
}

template< typename T >
Array::Array<T>( unsigned int length )
{
    if (length == 0)
        _arr = NULL;
    else
        _arr = new T[length];
}

template< typename T >
~Array::Array<T>()
{
    delete[] _arr;
}
