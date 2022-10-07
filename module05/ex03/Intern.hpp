/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:17:54 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/07 13:53:06 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern&	operator=( Intern const & rhs );

		AForm	*makeForm( std::string const formName, std::string const formTarget );
	private:
		typedef	AForm*	(Intern::*funcptr)( std::string const& );
		std::string		_formNames[3];
		funcptr			_formList[3];

		AForm		*shrubberyCreation( std::string const &formName );
		AForm		*robotomyRequest( std::string const &formName );
		AForm		*presidentialPardon( std::string const &formName );
};

std::ostream &			operator<<( std::ostream & o, Intern const &i );

#endif
