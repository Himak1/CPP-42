/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/20 18:12:55 by jhille        #+#    #+#                 */
/*   Updated: 2022/04/21 12:39:50 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>

class	Contact
{
	public:
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		
};

class	PhoneBook
{
	public:
		Contact	contacts[8];
		void	add_ct(void);
		void	search_ct(void);
		void	delete_ct(void);
};

#endif