/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 17:17:48 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/03 17:50:21 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <iterator>

template< typename T>
class MutantStack
{
	public:
		MutantStack();
		~MutantStack();
		bool		empty() const;
		size_t		size() const;
		T&			top() const;
		void		push(const T& val);
		void		emplace(T& elemContent);
		void		pop();
		class iterator : iterator
	private:
		std::stack<T>	_stack;
}

# include "MutantStack.tpp"

#endif
