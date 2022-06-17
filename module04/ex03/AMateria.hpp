/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 14:23:22 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/17 17:50:57 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

//# include "ICharacter.hpp"
# include <string>

class AMateria
{
	protected:
		virtual	~AMateria();

		std::string	type;
	public:
		AMateria( std::string const& type_param );
		AMateria( const AMateria& src );

		AMateria&	operator=( AMateria const& rhs );

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		//virtual void use(ICharacter& target);
};

#endif
