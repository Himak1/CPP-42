/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/04 12:20:10 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/04 17:27:16 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class	Contact
{
	public:
		Contact();
		void				ini_contact(void);
		int					getAge(void);
		void				setAge(int new_age);
		const std::string&	getFirstName(void);
		const std::string&	getLastName(void);
		const std::string&	getNickname(void);
		const std::string&	getPhoneNumber(void);
		const std::string&	getDarkestSecret(void);
	private:
		int         age;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif