/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 16:05:09 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/20 16:05:59 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif
