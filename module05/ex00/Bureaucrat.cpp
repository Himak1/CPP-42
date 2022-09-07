/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:15:28 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/07 11:25:33 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat( const std::string& nameArg, const uint gradeArg )
	: name(nameArg), grade(gradeArg)
{
	try
	{
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
	}
	catch (GradeTooHighException e)
	{
		std::cout << "Bureaucrat " << name << ": " << e.what() << std::endl;
	}
	catch (GradeTooLowException f)
	{
		std::cout << "Bureaucrat " << name << ": " << f.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat& src )
	:name(src.name)
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
		this->grade = rhs.grade;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	Bureaucrat::getName( void )
{
	return (name);
}

uint	Bureaucrat::getGrade( void )
{
	return (grade);
}

void	Bureaucrat::raiseGrade( void )
{
	grade--;
	try
	{
		if (grade < 1)
			throw GradeTooHighException();
	}
	catch (GradeTooHighException e)
	{
		std::cout << "Bureaucrat " << name << ": " << e.what() << std::endl;
	}
}

void	Bureaucrat::lowerGrade( void )
{
	grade++;
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
	}
	catch (GradeTooLowException e)
	{
		std::cout << "Bureaucrat " << name << ": " << e.what() << std::endl;
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
