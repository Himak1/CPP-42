/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 16:50:30 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/09 15:32:28 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( std::string givenName );
		ScavTrap( ScavTrap const& src );
		~ScavTrap( void );

		ScavTrap&		operator=( ScavTrap const& rhs );

		void		attack( const std::string& target );
		void		guardGate( void );
	private:
		ScavTrap( void );
};

#endif