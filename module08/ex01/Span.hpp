/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 17:25:54 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/03 15:18:39 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{
	public:
		Span(unsigned int N);
		Span(const Span& src);
		~Span();

		Span&				operator=(const Span& rhs);

		void				addNumber(int number);
		void				addNRandom(unsigned int numbersToAdd);
		int					shortestSpan();
		int					longestSpan();
	private:
		Span();
		unsigned int		_max_length;
		std::vector<int>	_vec;
};

#endif
