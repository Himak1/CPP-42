/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/01 15:34:53 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/07 12:04:33 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

/* #region ------------------------- CONSTRUCTOR ---------------------------- */

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
	: AForm("RobotomyRequestForm", target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
	: AForm(src)
{
	*this = src;
}

/* #endregion */

/* #region ------------------------- DESTRUCTOR ----------------------------- */

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/* #endregion */

/* #region ------------------------- OVERLOAD ------------------------------- */

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		AForm::operator = (rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << (AForm&)i << std::endl;
	return o;
}

/* #endregion */

/* #region ------------------------- METHODS -------------------------------- */

void	RobotomyRequestForm::execute( Bureaucrat const &executor ) const
{
	if (executor.getGrade() <= getExecGrade())
	{
		srand(time(NULL));
		int	success = rand() % 9;
		std::cout << "GRGRGRGRGRGRGRG" << std::endl;
		if (success < 5)
			std::cout << getTarget() << " has been robotomized successfully" << std::endl;
		else
			std::cout << getTarget() << " has not been robotomized" << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
	return ;
}

/* #endregion */
