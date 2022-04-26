#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Zombie::Zombie()
{
}

Zombie::Zombie( const Zombie & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Zombie &				Zombie::operator=( Zombie const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Zombie const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */