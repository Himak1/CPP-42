/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   StringToLiterals.hpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 15:54:47 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/12 13:32:59 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGTOLITERALS_HPP
# define STRINGTOLITERALS_HPP

# include <iostream>
# include <string>

# define SET 0
# define ERROR 1
# define NONDISPLAY 2

class StringToLiterals
{
	public:
		StringToLiterals();
		StringToLiterals( StringToLiterals const& src );
		~StringToLiterals();

		StringToLiterals&	operator=( StringToLiterals const& rhs );

		int	literalType( const char *str );

		std::ostream&	getCharStrm();
		std::ostream&	getIntStrm();
		std::ostream&	getFloatStrm();
		std::ostream&	getDoubleStrm();
	private:
		char	charValue;
		int		intValue;
		float	floatValue;
		double	doubleValue;
		int		charSet;
		int		intSet;
		int		floatSet;
		int		doubleSet;

		int	setChar( const char *str );
		int	setInt( const char *str );

		void	assignFromChar();
};

std::ostream&	operator<<( std::ostream& o, StringToLiterals const& i );

#endif
