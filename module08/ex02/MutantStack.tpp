/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.tpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 17:18:28 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/03 17:48:07 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
MutantStack<T>::MutantStack()
{
}

~MutantStack<T>::MutantStack()
{
}

bool		MutantStack::empty() const
{
	return (_stack.empty());
}

size_t		MutantStack::size() const
{
	return (_stack.size());
}

T&			MutantStack::top() const
{
	return (_stack.top());
}

void		MutantStack::push(const T& val)
{
	_stack.push(val);
}

void		MutantStack::pop()
{
	_stack.pop();
}
