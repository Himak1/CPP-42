/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 16:05:09 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/21 17:24:15 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character( std::string nameParam );
		Character( Character const& src );
		~Character();

		Character&	operator=( Character const & rhs );

		std::string const&	getName() const;
		void				equip( AMateria* m );
		void				unequip( int idx );
		void				use( int idx, ICharacter& target );
	private:
		Character();

		std::string	name;
		AMateria*	inventory[4];
		AMateria*	trashItem;
};

#endif
