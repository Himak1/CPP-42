/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/03 15:53:12 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/04 18:08:54 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	public:
		Weapon( std::string weaponType );
		~Weapon();
		const std::string&	getType( void );
		void				setType( std::string newType );
	private:
		std::string	type;
};

#endif
