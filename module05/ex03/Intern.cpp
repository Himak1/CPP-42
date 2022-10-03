/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 16:10:48 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/03 16:57:34 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	srf = new ShrubberyCreationForm("placeholder");
	rrf = new RobotomyRequestForm("placeholder");
	ppf = new PresidentialPardonForm("placeholder");
}

Intern::Intern( const Intern & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	delete srf;
	delete rrf;
	delete ppf;
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
	//o << (AForm&)i << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AForm	*makeForm( std::string formName, std::string formTarget )
{
	std::cout << "Intern creates " << formName << std::endl;
	
	return ();
}
