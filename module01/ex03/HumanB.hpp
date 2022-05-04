/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/04 17:51:36 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/04 18:05:53 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB( std::string name );
		HumanB( std::string name, Weapon weaponType );
		~HumanB();
		void	setWeapon( Weapon weaponType );
		void	attack( void );
	private:
		Weapon		weapon;
		std::string	name;
};

#endif