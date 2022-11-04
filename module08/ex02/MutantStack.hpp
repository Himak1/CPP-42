/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 17:17:48 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/04 17:55:40 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <deque>

template< class T, class Container = std::deque<T> >
class MutantStack : public Container
{
	public:
		typedef typename Container::value_type				value_type;
   		typedef typename Container::reference				reference;
		typedef typename Container::const_reference			const_reference;
		typedef typename Container::size_type				size_type;
		typedef	typename Container::iterator				iterator;
		typedef	typename Container::const_iterator			const_iterator;
		typedef	typename Container::reverse_iterator		reverse_iterator;
		typedef	typename Container::const_reverse_iterator	const_reverse_iterator;

		MutantStack();
		~MutantStack();
		bool		empty() const;
		size_type	size() const;
		T&			top();
		void		push(const T& val);
		void		pop();
	private:

};



# include "MutantStack.tpp"

#endif
