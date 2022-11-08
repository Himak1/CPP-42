/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.tpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 17:18:28 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/08 15:47:24 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template< class T, class Container >
MutantStack<T, Container>::MutantStack()
{
}

template< class T, class Container >
MutantStack<T, Container>::MutantStack(const MutantStack& src)
	: Container(src)
{
}

template< class T, class Container >
MutantStack<T, Container>::~MutantStack()
{
}

template< class T, class Container >
MutantStack<T, Container>&	MutantStack<T, Container>::operator=(const MutantStack& rhs)
{
	if (this != &rhs)
	{
		Container::operator = (rhs);
	}
	return (*this);
}

template< class T, class Container >
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin()
{
	return (this->c.begin());
}
