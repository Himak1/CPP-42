/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 16:05:09 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/05 15:29:22 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

# define INV_SIZE 4

typedef struct s_lst 
{
	AMateria		*m;
	struct s_lst	*next;
}					t_lst;

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
		AMateria*	inventory[INV_SIZE];
		t_lst*		ground;

		t_lst*	new_lst( int idx );
		void	lst_append( int idx );
		void	lst_clear();
};

#endif
