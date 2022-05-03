/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/20 18:12:55 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/03 12:43:40 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>

class	Contact
{
	public:
		Contact();
		void		ini_contact(void);
		int			age;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	private:

};

class	PhoneBook
{
	public:
		void	add_ct(void);
		void	search_ct(void);
		int		replace_ct(void);
	private:
		void	column_print(void);
		Contact	contacts[8];
};

#endif