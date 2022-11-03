/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 17:25:54 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/03 17:03:55 by jhille        ########   odam.nl         */
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

		Span&	operator=(const Span& rhs);
		int		operator[](const unsigned int& index) const;

		void	addNumber(int number);
		void	addNRandom(unsigned int numbersToAdd);
		int		shortestSpan();
		int		longestSpan();
		int		size() const;
	private:
		Span();
		unsigned int		_max_length;
		std::vector<int>	_vec;
};

std::ostream&	operator<<(std::ostream& o, const Span& input);

#endif
