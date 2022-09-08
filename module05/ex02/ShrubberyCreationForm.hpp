/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/08 14:27:01 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/08 16:51:31 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const &src );
		~ShrubberyCreationForm();

		ShrubberyCreationForm&	operator=( ShrubberyCreationForm const &rhs );

		void	execute( Bureaucrat const &executor ) const;
	private:
		ShrubberyCreationForm();

		const std::string	_target;
};

std::ostream&	operator<<( std::ostream &o, ShrubberyCreationForm const &i );

#endif
