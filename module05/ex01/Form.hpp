/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/05 17:02:55 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/05 17:21:24 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form
{

	public:

		Form();
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

	private:
		std::string	name;
		bool		issigned;
		const uint	signperm;
		const uint	execperm;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif
