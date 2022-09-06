/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/05 17:02:56 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/06 18:29:53 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
	: _name(""), _isSigned(false), _signPerm(0), _execPerm(0)
{
	
}

Form::Form( std::string name, uint signPerm, uint execPerm )
	: _name(name), _isSigned(false), _signPerm(signPerm), _execPerm(execPerm)
{

}

Form::Form(const Form &src)
	: _name(src.getName()), _isSigned(src.getIsSigned()),\
	_signPerm(src.getSignPerm()), _execPerm(src.getExecPerm())
{
	*this = src;
}

/* #region ------------------------- DESTRUCTOR ------------------------------ */

Form::~Form()
{
}

/* #endregion */

/* #region ------------------------- OVERLOAD ------------------------------- */

Form &Form::operator=(Form const &rhs)
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Form const &i)
{
	o << "name: " << i.getName() << std::endl
			<< "Signed:" << i.getIsSigned() << std::endl
			<< "Signing Permission Grade:" << i.getSignPerm() << std::endl
			<< "Execute Permission Grade:" << i.getExecPerm() << std::endl;
	return (o);
}

/* #endregion */

/* #region ------------------------- METHODS -------------------------------- */

inline std::string	Form::getName()
{
	return (_name);
}

inline bool	Form::getIsSigned()
{
	return (_isSigned);
}

inline uint	Form::getSignPerm()
{
	return (_signPerm);
}

inline uint	Form::getExecPerm()
{
	return (_execPerm);
}

/* #endregion */