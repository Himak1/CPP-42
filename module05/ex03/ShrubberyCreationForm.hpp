/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/08 14:27:01 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/04 14:23:30 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : virtual public AForm
{
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const &src );
		~ShrubberyCreationForm();

		ShrubberyCreationForm&	operator=( ShrubberyCreationForm const &rhs );

		void	execute( Bureaucrat const &executor ) const;
	private:
		ShrubberyCreationForm();
};

std::ostream&	operator<<( std::ostream &o, ShrubberyCreationForm const &i );

#endif
