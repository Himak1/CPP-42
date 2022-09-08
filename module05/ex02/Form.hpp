/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/05 17:02:55 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/08 14:06:17 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class AForm
{
	public:
		AForm( std::string name, uint signGrade, uint execGrade );	
		AForm( AForm const &src );
		~AForm();
		AForm&	operator=( AForm const &rhs );

		std::string		getName( void ) const;
		bool			getIsSigned( void ) const;
		uint			getSignGrade( void ) const;
		uint			getExecGrade( void ) const;
		void			beSigned( Bureaucrat const &signer );
		virtual void	execute( Bureaucrat const &executor ) const = 0;
	
		class GradeTooLowException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
	protected:
		AForm();
	private:
		const std::string	_name;
		bool				_isSigned;
		const uint			_signGrade;
		const uint			_execGrade;

		class GradeTooHighException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
};

std::ostream&		operator<<( std::ostream &o, AForm const &i );

#endif
