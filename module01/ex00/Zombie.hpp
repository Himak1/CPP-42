#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{

	public:

		Zombie();
		Zombie( Zombie const & src );
		~Zombie();

		Zombie &		operator=( Zombie const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Zombie const & i );

#endif /* ********************************************************** ZOMBIE_H */