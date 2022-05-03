#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{

	public:

		HumanA();
		HumanA( HumanA const & src );
		~HumanA();
		void	attack( void );
	private:
		Weapon		weapon;
		std::string	name;
};

#endif