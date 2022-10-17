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

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

typedef unsigned int	uint;

class AForm
{
	public:
		virtual ~AForm();
		AForm&	operator=( AForm const &rhs );

		std::string		getName( void ) const;
		std::string		getTarget( void ) const;
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
		AForm( std::string name, std::string target, uint signGrade, uint execGrade );
		AForm( AForm const &src );
		AForm();
	private:
		const std::string	_name;
		const std::string	_target;
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
