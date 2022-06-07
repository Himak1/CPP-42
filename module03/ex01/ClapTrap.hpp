#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap( void );
		ClapTrap( const std::string givenName );
		ClapTrap( ClapTrap const& src );
		~ClapTrap( void );	

		ClapTrap&	operator=( ClapTrap const& rhs );

		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		bool		isAlive( void );
		bool		hasEnergy( void );
	private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
};

#endif