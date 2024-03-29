/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/04 17:51:34 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/12 11:46:33 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA( std::string givenName, Weapon& weaponType );
		~HumanA();
		void	attack( void );
	private:
		Weapon&		weapon;
		std::string	name;
};

#endif