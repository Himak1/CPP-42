/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.tpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 17:18:28 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/08 16:08:22 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

template< class T, class Container >
MutantStack<T, Container>::MutantStack()
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
		std::stack<T, Container>::operator = (rhs);
	}
	return (*this);
}

template< class T, class Container >
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin()
{
	return (this->c.begin());
}

template< class T, class Container >
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end()
{
	return (this->c.end());
}

template< class T, class Container >
typename MutantStack<T, Container>::reverse_iterator	MutantStack<T, Container>::rbegin()
{
	return (this->c.rbegin());
}

template< class T, class Container >
typename MutantStack<T, Container>::reverse_iterator	MutantStack<T, Container>::rend()
{
	return (this->c.rend());
}
