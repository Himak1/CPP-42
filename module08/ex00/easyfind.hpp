/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 14:58:57 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/08 16:10:31 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

template< typename T >
typename T::iterator	easyfind(T input, int i)
{
	typename T::iterator	it;

	it = find(input.begin(), input.end(), i);
	if (it == input.end())
		throw std::exception();
	return (it);
}

#endif
