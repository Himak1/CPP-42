/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/05 17:02:56 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/07 17:47:26 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

/* #region ------------------------- CONSTRUCTOR ---------------------------- */


AForm::AForm()
	: _name(""), _isSigned(false), _signGrade(0), _execGrade(0)
{
	
}

AForm::AForm( std::string name, std::string target, uint signGrade, uint execGrade )
	: _name(name), _target(target), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
	else if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm &src)
	: _name(src.getName()), _isSigned(src.getIsSigned()),\
	_signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	*this = src;
}
/* #endregion */

/* #region ------------------------- DESTRUCTOR ----------------------------- */

AForm::~AForm()
{
}

/* #endregion */

/* #region ------------------------- OVERLOAD ------------------------------- */

AForm &AForm::operator=(AForm const &rhs)
{
	if ( this != &rhs )
	{
	
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, AForm const &i)
{
	o << "name: " << i.getName() << std::endl
		<< "target: " << i.getTarget() << std::endl
		<< "signed: " << i.getIsSigned() << std::endl
		<< "signing grade: " << i.getSignGrade() << std::endl
		<< "execute grade: " << i.getExecGrade();
	return (o);
}
/* #endregion */

/* #region ------------------------- METHODS -------------------------------- */

inline std::string	AForm::getName( void ) const
{
	return (_name);
}

inline std::string	AForm::getTarget( void ) const
{
	return (_target);
}

inline bool	AForm::getIsSigned( void ) const
{
	return (_isSigned);
}

inline uint	AForm::getSignGrade( void ) const
{
	return (_signGrade);
}

inline uint	AForm::getExecGrade( void ) const
{
	return (_execGrade);
}

void		AForm::beSigned( Bureaucrat const &signer )
{
	if (signer.getGrade() <= _signGrade)
		_isSigned = true;
	else
		throw GradeTooLowException();
}
/* #endregion */

/* #region ------------------------- EXCEPTIONS ----------------------------- */

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("grade is above maximum value 1");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}
/* #endregion */
