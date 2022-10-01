/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/01 17:29:04 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/01 17:29:10 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

/* #region ------------------------- CONSTRUCTOR ---------------------------- */

PresidentialPardonForm::PresidentialPardonForm( std::string target )
	: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
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
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}

/* #endregion */

/* #region ------------------------- METHODS -------------------------------- */

void	PresidentialPardonForm::execute( Bureaucrat const &executor ) const
{

}

/* #endregion */
