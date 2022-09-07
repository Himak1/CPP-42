/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/05 17:02:56 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/07 11:28:15 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


/* ------------------------------- CONSTRUCTOR ------------------------------ */


Form::Form()
	: _name(""), _isSigned(false), _signGrade(0), _execGrade(0)
{
	
}

Form::Form( std::string name, uint signGrade, uint execGrade )
	: _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{

}

Form::Form(const Form &src)
	: _name(src.getName()), _isSigned(src.getIsSigned()),\
	_signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	*this = src;
}

/* #region ------------------------- DESTRUCTOR ----------------------------- */

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
		<< "Signed: " << i.getIsSigned() << std::endl
		<< "Signing Grade: " << i.getSignGrade() << std::endl
		<< "Execute Grade: " << i.getExecGrade();
	return (o);
}

/* #endregion */

/* #region ------------------------- METHODS -------------------------------- */

inline std::string	Form::getName() const
{
	return (_name);
}

inline bool	Form::getIsSigned() const
{
	return (_isSigned);
}

inline uint	Form::getSignGrade() const
{
	return (_signGrade);
}

inline uint	Form::getExecGrade() const
{
	return (_execGrade);
}

/* #endregion */

/* #region ------------------------- Exceptions ----------------------------- */

const char* Form::GradeTooHighException::what() const throw()
{
	return ("grade is above maximum value 1");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("grade is below minimum value 150");
}

/* #endregion */
