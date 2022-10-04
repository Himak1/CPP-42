/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/01 17:29:04 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/04 10:55:18 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

/* #region ------------------------- CONSTRUCTOR ---------------------------- */

PresidentialPardonForm::PresidentialPardonForm( std::string target )
	: AForm("Presidential pardon", target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &src )
{
	*this = src;
}

/* #endregion */

/* #region ------------------------- DESTRUCTOR ----------------------------- */

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/* #endregion */

/* #region ------------------------- OVERLOAD ------------------------------- */

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		AForm::operator = (rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << (AForm&)i << std::endl;
	return o;
}

/* #endregion */

/* #region ------------------------- METHODS -------------------------------- */

void	PresidentialPardonForm::execute( Bureaucrat const &executor ) const
{
	if (executor.getGrade() <= getExecGrade())
	{
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}

/* #endregion */
