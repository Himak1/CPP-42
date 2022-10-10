/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   StringToLiterals.hpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 15:54:47 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/10 17:33:45 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGTOLITERALS_HPP
# define STRINGTOLITERALS_HPP

# include <iostream>
# include <string>

# define CHAR 0
# define INT 1
# define FLOAT 2
# define DOUBLE 3

class StringToLiterals
{
	public:
		StringToLiterals();
		StringToLiterals( StringToLiterals const & src );
		~StringToLiterals();

		StringToLiterals&	operator=( StringToLiterals const & rhs );

		void	setChar(char *str);
	private:
		char	charValue;
		int		intValue;
		float	floatValue;
		double	doubleValue;
		bool	charSet;
		bool	intSet;
		bool	floatSet;
		bool	doubleSet;
};

std::ostream&	operator<<( std::ostream & o, StringToLiterals const & i );

int	literalType(const char *str);

#endif
