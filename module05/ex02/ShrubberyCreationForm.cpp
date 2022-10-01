/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/08 14:27:00 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/01 17:12:31 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

/* #region ------------------------- CONSTRUCTOR ---------------------------- */

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
	: AForm("ShrubberyCreationForm", target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &src )
	: AForm()
{
	*this = src;
}

/* #endregion */

/* #region ------------------------- DESTRUCTOR ----------------------------- */

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/* #endregion */

/* #region ------------------------- OVERLOAD ------------------------------- */

ShrubberyCreationForm& 	ShrubberyCreationForm::operator=( ShrubberyCreationForm const &rhs )
{
	if ( this != &rhs )
	{
		AForm::operator = (rhs);
	}
	return *this;
}

std::ostream&	operator<<( std::ostream &o, ShrubberyCreationForm const &i )
{
	o << (AForm&)i;
	return o;
}

/* #endregion */

/* #region ------------------------- METHODS -------------------------------- */

void	ShrubberyCreationForm::execute( Bureaucrat const &executor ) const
{
	if (executor.getGrade() <= getExecGrade())
		return ;
	else
		throw AForm::GradeTooLowException();
	return ;
}

/* #endregion */
