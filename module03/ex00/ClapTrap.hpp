/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 15:47:53 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/09 15:47:54 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap( const std::string givenName );
		ClapTrap( ClapTrap const& src );
		~ClapTrap();	

		ClapTrap&	operator=( ClapTrap const& rhs );

		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		bool		isAlive( void );
		bool		hasEnergy( void );

		// ---- Getters and Setters ---- //
		std::string	getName( void ) const;
		int			getHP( void ) const;
		int			getEP( void) const;
		int			getAtkDmg( void ) const;
		void		setName( std::string givenName );
		void		setHP( int hp );
		void		setEP( int ep );
		void		setAtkDmg( int AtkDmg );
	protected:
		ClapTrap( void );
	private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
};

#endif