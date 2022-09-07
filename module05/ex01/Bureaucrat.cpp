/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:15:28 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/07 17:48:41 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat( const std::string& nameArg, const uint gradeArg )
	: _name(nameArg), _grade(gradeArg)
{
	try
	{
		if (_grade < 1)
			throw GradeTooHighException();
		else if (_grade > 150)
			throw GradeTooLowException();
	}
	catch (GradeTooHighException e)
	{
		std::cout << "Bureaucrat " << _name << ": " << e.what() << std::endl;
	}
	catch (GradeTooLowException f)
	{
		std::cout << "Bureaucrat " << _name << ": " << f.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat& src )
	: _name(src._name)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat&				Bureaucrat::operator=( Bureaucrat const& rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs._grade;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	Bureaucrat::getName( void ) const
{
	return (_name);
}

uint	Bureaucrat::getGrade( void ) const
{
	return (_grade);
}

void	Bureaucrat::raiseGrade( void )
{
	_grade--;
	try
	{
		if (_grade < 1)
			throw GradeTooHighException();
	}
	catch (GradeTooHighException e)
	{
		std::cout << "Bureaucrat " << _name << ": " << e.what() << std::endl;
	}
}

void	Bureaucrat::lowerGrade( void )
{
	_grade++;
	try
	{
		if (_grade > 150)
			throw GradeTooLowException();
	}
	catch (GradeTooLowException e)
	{
		std::cout << "Bureaucrat " << _name << ": " << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm( Form &f ) const
{
	try
	{
		f.beSigned(*this);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << _name << " couldn't sign " << f.getName()
					<< " because their signing " << e.what() << std::endl;
	}
}

/*
** ------------------------------- EXCEPTIONS ---------------------------------
*/

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade is above maximum value 1");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade is below minimum value 150");
}

/* ************************************************************************** */
