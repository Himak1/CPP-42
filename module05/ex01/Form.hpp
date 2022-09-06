/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/05 17:02:55 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/06 16:39:27 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form
{
	public:
		Form( std::string name, uint signPerm, uint execPerm );	
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		std::string	getName();
		bool		getIsSigned();
		uint		getSignPerm();
		uint		getExecPerm();
	private:
		Form();

		std::string	_name;
		bool		_isSigned;
		const uint	_signPerm;
		const uint	_execPerm;
};

std::ostream&		operator<<( std::ostream& o, Form const & i );

#endif
