/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 14:58:57 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/01 17:17:23 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <stdexcept>

template< typename T >
typename T::iterator	easyfind(T input, int i)
{
	typename T::iterator	it;

	it = find(input.begin(), input.end(), i);
	if (it == input.end())
		throw std::exception();
	return (it);
}
