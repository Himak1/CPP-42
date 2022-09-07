/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/05 17:02:55 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/07 17:42:30 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
	public:
		Form( std::string name, uint signGrade, uint execGrade );	
		Form( Form const &src );
		~Form();

		Form &		operator=( Form const &rhs );

		std::string	getName( void ) const;
		bool		getIsSigned( void ) const;
		uint		getSignGrade( void ) const;
		uint		getExecGrade( void ) const;
		void		beSigned( Bureaucrat const &signer );

		class GradeTooLowException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
	private:
		Form();

		std::string	_name;
		bool		_isSigned;
		const uint	_signGrade;
		const uint	_execGrade;

		class GradeTooHighException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
};

std::ostream&		operator<<( std::ostream& o, Form const &i );

#endif
