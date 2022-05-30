#include "Point.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Point::Point()
{
}

Point::Point( const Point & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point()
{
}

Point &				Point::operator=( Point const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Point const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}
