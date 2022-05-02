#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{

	public:
		Zombie();
		Zombie( std::string name_param );
		~Zombie();
		void	announce( void );
		void	setName( std::string name_param );
	private:
		std::string	name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif