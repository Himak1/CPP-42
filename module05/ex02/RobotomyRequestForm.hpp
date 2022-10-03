/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/01 15:34:37 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/03 15:23:22 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		void	execute( Bureaucrat const &executor ) const;
	private:
		RobotomyRequestForm();
};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif
