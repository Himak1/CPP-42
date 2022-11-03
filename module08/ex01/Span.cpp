/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 17:25:56 by jhille        #+#    #+#                 */
/*   Updated: 2022/11/03 16:02:34 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <utility>
#include <ctime>
#include <cstdlib>
#include <climits>

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

void	Span::addNumber(int number)
{
	if (_vec.size() == _max_length)
		throw std::exception();
	_vec.push_back(number);
}

void	Span::addNRandom(unsigned int numbersToAdd)
{
	std::vector<int>::iterator	it;

	if (_vec.size() + numbersToAdd >= _max_length)
		throw std::exception();
	srand(time(NULL));
	if (_vec.size() != 0)
	{
		it =  --_vec.end();
		_vec.resize(_vec.size() + numbersToAdd);
		generate(it, _vec.end(), rand);
	}
	else
	{
		_vec.resize(numbersToAdd);
		generate(_vec.begin(), _vec.end(), rand);
	}
}

int		Span::shortestSpan()
{
	std::vector<int>::iterator	it;
	int							diff;

	if (_vec.size() < 2)
		throw std::exception();
	diff = INT_MAX;
	it = _vec.begin();
	std::sort(_vec.begin(), _vec.end());
	while (it != _vec.end())
	{
		if ((it + 1) != _vec.end() && *(it + 1) - *it < diff)
			diff = *(it + 1) - *it;
		++it;
	}
	return (diff);
}

int		Span::longestSpan()
{
	int	output;

	if (_vec.size() < 2)
		throw std::exception();
	output = *std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end());
	return (output);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
