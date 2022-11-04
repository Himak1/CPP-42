/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.tpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 17:18:28 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/04 17:47:07 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template< class T, class Container >
MutantStack<T, Container>::MutantStack()
{
}

template< class T, class Container >
MutantStack<T, Container>::~MutantStack()
{
}

template< class T, class Container >
bool	MutantStack<T, Container>::empty() const
{
	return (Container::empty());
}

template< class T, class Container >
typename MutantStack<T, Container>::size_type	MutantStack<T, Container>::size() const
{
	return (Container::size());
}

template< class T, class Container >
T&	MutantStack<T, Container>::top()
{
	return (Container::back());
}

template< class T, class Container >
void	MutantStack<T, Container>::push(const T& val)
{
	Container::push_back(val);
}

template< class T, class Container >
void	MutantStack<T, Container>::pop()
{
	Container::pop_back();
}
