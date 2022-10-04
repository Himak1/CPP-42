/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 16:10:48 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/04 14:26:59 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	_formNames[0] = "shrubbery creation";
	_formNames[1] = "robotomy request";
	_formNames[2] = "presidential pardon";
	_formList[0] = &Intern::shrubberyCreation;
	_formList[1] = &Intern::robotomyRequest;
	_formList[2] = &Intern::presidentialPardon;
}

Intern::Intern( const Intern &src )
{
	_formNames[0] = "shrubbery creation";
	_formNames[1] = "robotomy request";
	_formNames[2] = "presidential pardon";
	_formList[0] = &Intern::shrubberyCreation;
	_formList[1] = &Intern::robotomyRequest;
	_formList[2] = &Intern::presidentialPardon;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
	{
	}
	return *this;
}

std::ostream &			operator<<( std::ostream &o, Intern const &i )
{
	(void)i;
	o << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AForm*	Intern::shrubberyCreation( std::string const &formName )
{
	return (new ShrubberyCreationForm(formName));
}

AForm*	Intern::robotomyRequest( std::string const &formName )
{
	return (new RobotomyRequestForm(formName));
}

AForm*	Intern::presidentialPardon( std::string const &formName )
{
	return (new PresidentialPardonForm(formName));
}

AForm*	Intern::makeForm( std::string const formName, std::string const formTarget )
{
	AForm	*output;

	output = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (!formName.compare(_formNames[i]))
		{
			output = (this->*_formList[i])(formTarget);
			break ;
		}
	}
	std::cout << "Intern creates " << formName << std::endl;
	return (output);
}
