/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 17:25:54 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/01 17:44:27 by jhille        ########   odam.nl         */
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
		int					shortestSpan();
		int					longestSpan();
	private:
		Span();
		unsigned int		_max_length;
		std::vector<int>	_vec;
};

// std::ostream&	operator<<(std::ostream& o, const Span& i);

#endif /* ************************************************************ SPAN_H */