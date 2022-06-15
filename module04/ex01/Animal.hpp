/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:18:48 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/15 16:37:29 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal( Animal const & src );
		virtual ~Animal();
	
		Animal&		operator=( Animal const & rhs );

		virtual void	makeSound() const;
		std::string		getType() const;
	protected:
		std::string	type;
	private:
		Brain*	brain;
};

#endif
