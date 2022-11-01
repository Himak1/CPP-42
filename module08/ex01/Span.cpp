/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 17:25:56 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/01 18:07:18 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <utility>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span(unsigned int N)
	: _max_length(N)
{
}

Span::Span(const Span& src)
	: _max_length(src._max_length), _vec(src._vec)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span&			Span::operator=(const Span& rhs)
{
	if ( this != &rhs )
	{
		this->_max_length = rhs._max_length;
		this->_vec = rhs._vec;
	}
	return *this;
}

// std::ostream&	operator<<(std::ostream& o, const Span& input)
// {
// 	for (int i = 0; i < _vec.size(); i++)
// 		o << input._vec
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Span::addNumber(int number)
{
	if (_vec.size() == _max_length)
		throw std::exception();
	_vec.push_back(number);
}

int			Span::shortestSpan()
{
	std::vector<int>	cp;

	if (_vec.size() < 2)
		throw std::exception();
	// cp = _vec;
	// while (cp.size() > 2)
	// {

	// }
	return (-42);
}

int				Span::longestSpan()
{
	if (_vec.size() < 2)
		throw std::exception();
	std::pair<int> a = std::minmax(_vec);
	return (a.second - a.first);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */