/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 15:47:53 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/09 16:35:43 by jhille        ########   odam.nl         */
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
		std::string		getName( void ) const;
		unsigned int	getHP( void ) const;
		unsigned int	getEP( void) const;
		unsigned int	getAtkDmg( void ) const;
		void			setName( std::string givenName );
		void			setHP( unsigned int hp );
		void			setEP( unsigned int ep );
		void			setAtkDmg( unsigned int AtkDmg );
	protected:
		ClapTrap( void );
	private:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
};

#endif