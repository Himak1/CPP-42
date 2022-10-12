/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   StringToLiterals.hpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 15:54:47 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/12 17:36:27 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGTOLITERALS_HPP
# define STRINGTOLITERALS_HPP

# include <iostream>
# include <string>

# define NOTSET 0
# define SET 1
# define ERROR 2
# define NONDISPLAY 3

class StringToLiterals
{
	public:
		StringToLiterals();
		StringToLiterals( StringToLiterals const& src );
		~StringToLiterals();

		StringToLiterals&	operator=( StringToLiterals const& rhs );

		int	literalType( const char *str );

		void	printChar();
		void	printInt();
		void	printFloat();
		void	printDouble();
	private:
		char	charValue;
		int		intValue;
		float	floatValue;
		double	doubleValue;
		int		charSet;
		int		intSet;
		int		floatSet;
		int		doubleSet;

		int	setChar( std::string const& str );
		int	setInt( std::string const& str );
		int	setFloat( std::string const& str );

		void	assignFromChar();
		void	assignFromInt();
		void	assignFromFloat();
};

std::ostream&	operator<<( std::ostream& o, StringToLiterals const& i );

#endif
