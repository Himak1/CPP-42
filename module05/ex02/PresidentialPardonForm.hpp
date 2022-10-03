#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const &src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		void	execute( Bureaucrat const &executor ) const;
	private:
		PresidentialPardonForm();
};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif
