/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/04 17:51:34 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/04 18:05:28 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA( std::string name, Weapon weaponType );
		~HumanA();
		void	attack( void );
	private:
		Weapon		weapon;
		std::string	name;
};

#endif