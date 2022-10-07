/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 16:10:48 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/07 14:41:53 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	_formNames[0] = "ShrubberyCreation";
	_formNames[1] = "RobotomyRequest";
	_formNames[2] = "PresidentialPardon";
	_formList[0] = &Intern::shrubberyCreation;
	_formList[1] = &Intern::robotomyRequest;
	_formList[2] = &Intern::presidentialPardon;
}

Intern::Intern( const Intern &src )
{
	_formNames[0] = "ShrubberyCreation";
	_formNames[1] = "RobotomyRequest";
	_formNames[2] = "PresidentialPardon";
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
			std::cout << "Intern creates " << formName << " form" << std::endl;
			return (output);
		}
	}
	std::cout << formName << " form doesn't exist" << std::endl;
	return (NULL);
}
