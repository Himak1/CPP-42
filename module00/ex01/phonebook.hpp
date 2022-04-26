/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/20 18:12:55 by jhille        #+#    #+#                 */
/*   Updated: 2022/04/26 14:53:04 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>

class	Contact
{
	public:
		int			age;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		void		ini_contact(void);
	private:

};

class	PhoneBook
{
	public:
		Contact	contacts[8];
		int		iter_ct;
		void	add_ct(void);
		void	column_print(void);
		void	search_ct(void);
		int		replace_ct(void);
	private:

};

#endif