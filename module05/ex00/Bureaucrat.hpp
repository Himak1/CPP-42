/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:15:22 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/07 11:23:03 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include <string>

typedef unsigned int	uint;

class Bureaucrat
{
	public:
		Bureaucrat( const std::string& nameArg, const uint gradeArg );
		Bureaucrat( const Bureaucrat& src );
		~Bureaucrat();

		Bureaucrat&	operator=( const Bureaucrat& rhs );

		std::string	getName( void );
		uint		getGrade( void );
		void		raiseGrade( void );
		void		lowerGrade( void );
	private:
		Bureaucrat();

		const std::string	name;
		uint				grade;

		// -- Custom Exceptions -- //
		class GradeTooHighException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
};

#endif /* ****************************************************** BUREAUCRAT_H */
