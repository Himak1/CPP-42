/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 17:17:48 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/08 16:09:16 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>

template< class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename std::stack<T, Container>::container_type	container_type;
		typedef typename Container::value_type						value_type;
   		typedef typename Container::reference						reference;
		typedef typename Container::const_reference					const_reference;
		typedef typename Container::size_type						size_type;
		typedef	typename container_type::iterator					iterator;
		typedef typename container_type::reverse_iterator			reverse_iterator;

		MutantStack() ;
		~MutantStack();
		MutantStack&		operator=(const MutantStack& rhs);

		iterator			begin();
		iterator			end();
		reverse_iterator	rbegin();
		reverse_iterator	rend();
	private:
};

# include "MutantStack.tpp"

#endif
