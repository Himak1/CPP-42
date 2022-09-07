/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:15:22 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/07 18:08:19 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <stdexcept>
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

		std::string	getName( void ) const;
		uint		getGrade( void ) const;

		void		raiseGrade( void );
		void		lowerGrade( void );
	private:
		Bureaucrat();

		const std::string	_name;
		uint				_grade;

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
